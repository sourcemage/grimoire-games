(

  sedit  "s/-lglut /-lglut -lGLU -lXi -lXmu /"  configure
  sedit  "s/-lSDL /-lSDL -lpthread /"           configure

  ./configure  --prefix=${INSTALL_ROOT}/usr                     \
               --bindir=${INSTALL_ROOT}/usr/games               \
               --datadir=${INSTALL_ROOT}/usr/share/games        \
               --sysconfdir=${INSTALL_ROOT}/etc                 \
               --localstatedir=${INSTALL_ROOT}/var              \
               ${OPTS}                                          &&
  sedit  "s/-O2/${CFLAGS}/"  Makefile                           &&
  make                                                          &&
  prepare_install                                               &&
  make  install                                              

) > ${C_FIFO} 2>&1
