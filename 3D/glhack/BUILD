sedit  "s:^CFLAGS = -O -Wall -I../include:CFLAGS = $CFLAGS -I../include:"  src/Makefile &&
sedit  "s:/var/lib/games/glhack:/var/games/glhack:"  Makefile &&
sedit  "s:/var/lib/games/glhack:/var/games/glhack:"  include/unixconf.h &&
sedit  "s:lib/games:share/games/nethackdir:"  Makefile &&
sedit  "s:/usr/games/lib:/usr/share/games/nethackdir/:"  Makefile &&
sedit  's:^SHELLDIR = \$(PREFIX)/bin.*$:SHELLDIR = \$(PREFIX)/games:' Makefile &&

make  all
