(

  sedit  "s/-lglut /-lglut -lGLU -lXi -lXmu /"  configure
  sedit  "s/-lSDL /-lSDL -lpthread /"           configure

  ./configure  --build=${BUILD}                  \
               --prefix=${INSTALL_ROOT}/usr                     \
               --bindir=${INSTALL_ROOT}/usr/games               \
               --datadir=${INSTALL_ROOT}/usr/share/games        \
               --sysconfdir=${INSTALL_ROOT}/etc                 \
               --localstatedir=${INSTALL_ROOT}/var              \
               ${OPTS}                           &&
  sedit  "s/-O2/${CFLAGS}/"  Makefile            &&
  make                                           &&
  prepare_install                                &&
  #  make  install                               &&
  mkdir  -p        /usr/share/games/gltron       &&
  cp  -r  art      /usr/share/games/gltron       &&
  cp  -r  data     /usr/share/games/gltron       &&
  cp  -r  sounds   /usr/share/games/gltron       &&
  cp  -r  scripts  /usr/share/games/gltron       &&
  cp  gltron       /usr/share/games/gltron       &&
  ln    -sf        ../share/games/gltron/gltron  \
                   /usr/games/gltron

) > ${C_FIFO} 2>&1
