(

  ./configure  --prefix=${INSTALL_ROOT}/usr                  \
               --bindir=${INSTALL_ROOT}/usr/games            &&
  sedit  "s/-lvorbis/-lvorbis -lvorbisfile/"  \
         makefile                             &&
  make                                        &&
  prepare_install                             &&
  make    install

) > $C_FIFO 2>&1
