(
sedit "s/CFLAGS = -Wall/CFLAGS = -Wall $CFLAGS -DGL_GLEXT_PROTOTYPES/g"  src/Makefile.in &&
  ./configure  --build=$BUILD              \
               --prefix=${INSTALL_ROOT}/usr               \
               --bindir=${INSTALL_ROOT}/usr/games         \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               $OPTS    &&
  make                  &&
  prepare_install       &&
  make    install

) > $C_FIFO 2>&1
