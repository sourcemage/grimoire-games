/*
 * File: ggzdb_db4.c
 * Author: Rich Gade
 * Project: GGZ Server
 * Date: 11/10/2000
 * Desc: Back-end functions for handling the db3 sytle database
 * $Id: ggzdb_db4.c,v 1.3 2003/06/07 05:29:15 dr_maux Exp $
 *
 * Copyright (C) 2000 Brent Hendricks.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifdef HAVE_CONFIG_H
# include <config.h>		/* Site specific config */
#endif

#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#ifdef DB4_IN_DIR
#  include <db4/db.h>
#else
#  include <db.h>
#endif

#include "err_func.h"
#include "ggzd.h"
#include "ggzdb.h"
#include "ggzdb_proto.h"


/* Internal variables */
static DB *db_p = NULL; /* player database (table) */
static DB *db_s = NULL; /* stats database (table) */
static DB_ENV *db_e;
static int standalone = 0;


/* Function to initialize the db4 database system */
GGZReturn _ggzdb_init(ggzdbConnection connection, int set_standalone)
{
	u_int32_t flags;

	if(set_standalone) {
		flags = DB_INIT_MPOOL | DB_INIT_LOCK;
		standalone = 1;
	} else
		flags = DB_CREATE | DB_INIT_MPOOL | DB_INIT_LOCK | DB_THREAD;
#if DB_VERSION_MINOR == 1
	if (db_env_create_4001(&db_e, 0) != 0) {
		err_sys("db_env_create_4001() failed in _ggzdb_init()");
#else
	if (db_env_create_4000(&db_e, 0) != 0) {
		err_sys("db_env_create_4000() failed in _ggzdb_init()");
#endif
		return GGZ_ERROR;
	} else if (db_e->open(db_e, connection.datadir, flags , 0600) != 0) {
		err_sys("db_e->open() failed in _ggzdb_init()");
		return GGZ_ERROR;
	}

	return GGZ_OK;
}


/* Function to deinitialize the db4 database system */
void _ggzdb_close(void)
{
	/* FIXME: Check the return codes */
	if(db_p) {
		db_p->close(db_p, 0);
		db_p = NULL;
	}

	db_e->close(db_e, 0);
	db_e = NULL;
}


/* Function to enter the database */
void _ggzdb_enter(void)
{
	/* db4 doesn't need to set locks or anything */
}


/* Function to exit the database */
void _ggzdb_exit(void)
{
	/* db4 doesn't need to free locks or anything */
}


/* Function to initialize the player table */
GGZDBResult _ggzdb_init_player(char *datadir)
{
	u_int32_t flags;
	ggzdbPlayerEntry marker;

	if(standalone)
		flags = 0;
	else
		flags = DB_CREATE | DB_THREAD;

	/* Open the database file */
	if(db_create(&db_p, db_e, 0) != 0)
		err_sys_exit("db_create() failed in _ggzdb_init_player()");
#if DB_VERSION_MINOR == 1
	flags |= DB_AUTO_COMMIT;
	if (db_p->open(db_p, NULL, "player.db", NULL, DB_BTREE, flags, 0600) != 0)
#else
	if (db_p->open(db_p, "player.db", NULL, DB_BTREE, flags, 0600) != 0)
#endif
		err_sys_exit("db_p->open() failed in _ggzdb_init_player()");

	/* Add a marker entry for our next UID */
	marker.user_id = 1;
#if MAX_USER_NAME_LEN < 8
#error MAX_USER_NAME_LEN (see ggzd.h) must be at least 8 characters
#endif
	strcpy(marker.handle, "&nxtuid&");

	if (_ggzdb_player_add(&marker) != GGZDB_NO_ERROR) {
		/* FIXME: What to do? */
	}

	return GGZDB_NO_ERROR;
}


/* Function to add a player record */
GGZDBResult _ggzdb_player_add(ggzdbPlayerEntry *pe)
{
	int result;
	DBT key, data;

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(DBT));
	memset(&data, 0, sizeof(DBT));
	key.data = pe->handle;
	key.size = strlen(pe->handle);
	data.data = pe;
	data.size = sizeof(ggzdbPlayerEntry);
	data.flags = DB_DBT_USERMEM;

	result = db_p->put(db_p, NULL, &key, &data, DB_NOOVERWRITE);
	if (result == DB_KEYEXIST)
		return GGZDB_ERR_DUPKEY;
	else if (result != 0) {
		err_sys("put failed in _ggzdb_player_add()");
		return GGZDB_ERR_DB;
	}

	/* FIXME: We won't have to do this once ggzd can exit */
	db_p->sync(db_p, 0);

	return GGZDB_NO_ERROR;
}


/* Function to retrieve a player record */
GGZDBResult _ggzdb_player_get(ggzdbPlayerEntry *pe)
{
	int result;
	DBT key, data;

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(DBT));
	memset(&data, 0, sizeof(DBT));
	key.data = pe->handle;
	key.size = strlen(pe->handle);
	data.size = sizeof(ggzdbPlayerEntry);
	data.flags = DB_DBT_MALLOC;

	/* Perform the get */
	result = db_p->get(db_p, NULL, &key, &data, 0);
	if (result == DB_NOTFOUND)
		return GGZDB_ERR_NOTFOUND;
	else if (result != 0) {
		err_sys("get failed in _ggzdb_player_get()");
		return GGZDB_ERR_DB;
	}

	/* Copy it to the user data buffer */
	memcpy(pe, data.data, sizeof(ggzdbPlayerEntry));
	free(data.data); /* Allocated by db4? */

	return GGZDB_NO_ERROR;
}


/* Function to update a player record */
GGZDBResult _ggzdb_player_update(ggzdbPlayerEntry *pe)
{
	DBT key, data;

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(DBT));
	memset(&data, 0, sizeof(DBT));
	key.data = pe->handle;
	key.size = strlen(pe->handle);
	data.data = pe;
	data.size = sizeof(ggzdbPlayerEntry);
	data.flags = DB_DBT_USERMEM;

	if (db_p->put(db_p, NULL, &key, &data, 0) != 0) {
		err_sys("put failed in _ggzdb_player_update()");
		return GGZDB_ERR_DB;
	}

	/* FIXME: We won't have to do this once ggzd can exit */
	db_p->sync(db_p, 0);

	return GGZDB_NO_ERROR;
}


/* Function to get and update the next uid */
unsigned int _ggzdb_player_next_uid(void)
{
	ggzdbPlayerEntry marker;
	unsigned int nxt;

	/* Get the marker entry for our next UID */
	strcpy(marker.handle, "&nxtuid&");

	/* FIXME: We really should check for "impossible" failures below */
	_ggzdb_player_get(&marker);
	nxt = marker.user_id;
	marker.user_id++;
	_ggzdb_player_update(&marker);

	return nxt;
}


/* All functions below here are NOT THREADSAFE (at least yet) */
/* All functions below here are NOT THREADSAFE (at least yet) */
/* All functions below here are NOT THREADSAFE (at least yet) */
/* All functions below here are NOT THREADSAFE (at least yet) */

static DBC *db_c = NULL;
GGZDBResult _ggzdb_player_get_first(ggzdbPlayerEntry *pe)
{
	DBT key, data;

	if(db_c == NULL
	   && db_p->cursor(db_p, NULL, &db_c, 0) != 0) {
		err_sys("Failed to create db2 cursor");
		return GGZDB_ERR_DB;
	}

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(DBT));
	memset(&data, 0, sizeof(DBT));
	key.data = pe->handle;
	key.size = sizeof(pe->handle);
	data.size = sizeof(ggzdbPlayerEntry);
	data.flags = DB_DBT_MALLOC;
	if(db_c->c_get(db_c, &key, &data, DB_FIRST) != 0) {
		err_sys("Failed to get DB_FIRST record");
		return GGZDB_ERR_DB;
	}

	memcpy(pe, data.data, sizeof(ggzdbPlayerEntry));
	free(data.data); /* Allocated by db4? */

	return GGZDB_NO_ERROR;
}


GGZDBResult _ggzdb_player_get_next(ggzdbPlayerEntry *pe)
{
	int result;
	DBT key, data;

	if(db_c == NULL)
		err_sys_exit("get_next called before get_first, dummy");

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(DBT));
	memset(&data, 0, sizeof(DBT));
	key.data = pe->handle;
	key.size = sizeof(pe->handle);
	data.size = sizeof(ggzdbPlayerEntry);
	data.flags = DB_DBT_MALLOC;
	result = db_c->c_get(db_c, &key, &data, DB_NEXT);
	if (result == DB_NOTFOUND)
		return GGZDB_ERR_NOTFOUND;
	else if (result != 0) {
		err_sys("Failed to get DB_NEXT record");
		return GGZDB_ERR_DB;
	}

	memcpy(pe, data.data, sizeof(ggzdbPlayerEntry));
	free(data.data); /* Allocated by db4? */

	return GGZDB_NO_ERROR;
}


void _ggzdb_player_drop_cursor(void)
{
	if(db_c == NULL)
		err_sys_exit("drop_cursor called before get_first, dummy");
	db_c->c_close(db_c);
	db_c = NULL;
}


GGZDBResult _ggzdb_init_stats(ggzdbConnection connection)
{

	u_int32_t flags;

	if(standalone)
		flags = 0;
	else
		flags = DB_CREATE | DB_THREAD;

	/* Open the database file */
	if (db_create(&db_s, db_e, 0) != 0)
		err_sys_exit("db_create() failed in _ggzdb_init_stats()");
#if DB_VERSION_MINOR == 1
	flags |= DB_AUTO_COMMIT;
	if (db_p->open(db_s, NULL, "stats.db", NULL, DB_BTREE, flags, 0600) != 0)
#else
	if (db_p->open(db_s, "stats.db", NULL, DB_BTREE, flags, 0600) != 0)
#endif
		err_sys_exit("db_p->open() failed in _ggzdb_init_stats()");

	return GGZDB_NO_ERROR;
}


GGZDBResult _ggzdb_stats_lookup(ggzdbPlayerGameStats *stats)
{
	DBT key, data;
	int result;
	char key_string[MAX_USER_NAME_LEN + MAX_GAME_NAME_LEN + 2];

	snprintf(key_string, sizeof(key_string),
		 "%s|%s", stats->player, stats->game);

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(key));
	memset(&data, 0, sizeof(data));
	key.data = key_string;
	key.size = strlen(key_string);
	data.size = sizeof(*stats);
	data.flags = DB_DBT_MALLOC;

	result = db_s->get(db_s, NULL, &key, &data, 0);
	if (result == DB_NOTFOUND)
		return GGZDB_ERR_NOTFOUND;
	else if (result != 0) {
		err_sys("get failed in _ggzdb_stats_lookup()");
		return GGZDB_ERR_DB;
	}

	/* Copy it to the user data buffer */
	memcpy(stats, data.data, sizeof(*stats));
	free(data.data); /* Allocated in get() */

	return GGZDB_NO_ERROR;
}

GGZDBResult _ggzdb_stats_update(ggzdbPlayerGameStats *stats)
{
	DBT key, data;
	char key_string[MAX_USER_NAME_LEN + MAX_GAME_NAME_LEN + 2];

	snprintf(key_string, sizeof(key_string),
		 "%s|%s", stats->player, stats->game);

	/* Build the two DBT structures */
	memset(&key, 0, sizeof(key));
	memset(&data, 0, sizeof(data));
	key.data = key_string;
	key.size = strlen(key_string);
	data.data = stats;
	data.size = sizeof(*stats);
	data.flags = DB_DBT_USERMEM;

	if (db_s->put(db_s, NULL, &key, &data, 0) != 0) {
		err_sys("put failed in _ggzdb_stats_update()");
		return GGZDB_ERR_DB;
	}

	/* FIXME: We won't have to do this once ggzd can exit */
	db_s->sync(db_s, 0);

	return GGZDB_ERR_DB;
}
