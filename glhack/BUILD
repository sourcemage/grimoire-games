(

  sedit "s:^CFLAGS = -O -Wall -I../include:CFLAGS = $CFLAGS -I../include:" src/Makefile
  sedit "s:/var/lib/games/glhack:/var/games/glhack:" Makefile

  make all        &&
  prepare_install &&
  make    install

) > $C_FIFO 2>&1
