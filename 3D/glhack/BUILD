(

  sedit  "s:^CFLAGS = -O -Wall -I../include:CFLAGS = $CFLAGS -I../include:"  src/Makefile
  sedit  "s:/var/lib/games/glhack:/var/games/glhack:"  Makefile
  sedit  "s:/var/lib/games/glhack:/var/games/glhack:"  include/unixconf.h
  sedit  "s:lib/games:share/games/nethackdir:"  Makefile
  sedit  "s:/usr/games/lib:/usr/share/games/nethackdir/:"  Makefile

  make all         &&
  prepare_install  &&
  make    install  &&

  mv  /usr/share/games/nethackdir/glhack/glhack  /tmp/glhack.bin         &&
  mv  /usr/share/games/nethackdir/glhack/*  /usr/share/games/nethackdir  &&
  rmdir  /usr/share/games/nethackdir/glhack/                             &&
  mv  /tmp/glhack.bin  /usr/share/games/nethackdir/glhack                &&
  chmod  g+w  *  -R                                                      &&
  sedit  's:games/lib/:share/games/:'  /usr/games/glhack

) > $C_FIFO 2>&1
