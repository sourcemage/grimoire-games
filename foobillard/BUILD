(

  patch -p1 < $SCRIPT_DIRECTORY/glext.patch

  ./configure  --build=$BUILD              \
               --prefix=/usr               \
               --bindir=/usr/games         \
               --datadir=/usr/share/games  \
               --enable-glut               \
               $OPTS    &&
  make                  &&
  prepare_install       &&
  make    install

) > $C_FIFO 2>&1
