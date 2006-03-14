sedit  "s:^CFLAGS = -O -Wall -I../include:CFLAGS = $CFLAGS -I../include:"  src/Makefile &&
sedit  "s:/var/lib/games/glhack:/usr/share/games/glhack:"  Makefile &&
sedit  "s:/var/lib/games/glhack:/usr/share/games/glhack:"  include/unixconf.h &&
sedit  's:^SHELLDIR = \$(PREFIX)/bin.*$:SHELLDIR = \$(PREFIX)/games:' Makefile &&
sedit "s:GAMEPERM = 02755:GAMEPERM = 02750:" Makefile &&
sedit "s:FILEPERM = 0644:FILEPERM = 0640:" Makefile &&
sedit "s:EXEPERM  = 0755:EXEPERM = 0750:" Makefile &&
sedit "s:DIRPERM  = 0755:DIRPERM = 0750:" Makefile &&
sedit "s:VARFILEPERM = 0664:VARFILEPERM = 0660:" Makefile &&
sedit "s:VARDIRPERM  = 02775:VARDIRPERM  = 02770:" Makefile &&
sedit "s:GAMEDIR  = \$(PREFIX)/lib/games/\$(GAME):GAMEDIR = \$(PREFIX)/share/games/glhack:" Makefile &&

make_single  &&
make  LEX=flex all
