(

  sedit  "s/-mcpu=pentium -march=pentium/$CFLAGS/"  Makefile
  make                           &&
  prepare_install                &&
  make    INSTBINDIR=${INSTALL_ROOT}/usr/games  \
          install

) > $C_FIFO 2>&1

