(

  patch -p1 < $SCRIPT_DIRECTORY/glext.patch

  ./configure  --build=$BUILD              \
               --prefix=${INSTALL_ROOT}/usr               \
               --bindir=${INSTALL_ROOT}/usr/games         \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
	       --enable-bumpref=no         \
#               --enable-glut               \
               $OPTS    &&
  make                  &&
  prepare_install       &&
  make    install

) > $C_FIFO 2>&1
