(

  sedit  "s/-O2/$CFLAGS/"  configure
  ./configure  --prefix=/usr        \
               --bindir=/usr/games  &&
  make                              &&
  prepare_install                   &&
  make    install                   \
          BINDIR=/usr/games         \
          MANDIR=/usr/man/


) > $C_FIFO 2>&1
