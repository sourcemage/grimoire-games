(

  ./configure  --build=${BUILD}            \
               --prefix=${INSTALL_ROOT}/usr               \
               --bindir=${INSTALL_ROOT}/usr/games         \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install

) > ${C_FIFO} 2>&1
