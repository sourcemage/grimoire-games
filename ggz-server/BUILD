(
cp $SCRIPT_DIRECTORY/configure.ac . &&
cp $SCRIPT_DIRECTORY/ggzdb_db4.c ggzd/database/ &&
for i in $(grep -rl db_env_create_4000 .); do sedit "s/db_env_create_4000/db_env_create/g"  $i ;done &&
for i in $(grep -rl db_env_create_4001 .); do sedit "s/db_env_create_4001/db_env_create/g"  $i ;done &&
OPTS="OPTS --with-database=db4" &&
default_build
) > $C_FIFO 2>&1
