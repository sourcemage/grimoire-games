(

  sedit "s:^CFLAGS = -O -Wall -I../include:CFLAGS = $CFLAGS -I../include:" src/Makefile

  make all        &&
  prepare_install &&
  make    install

) > $C_FIFO 2>&1
