(
  sedit "s/-ansi//" src/Makefile.in                            &&
  sedit "s/-ansi//" src/Makefile.am                            &&
  sedit "s/-pedantic//" src/Makefile.in                        &&
  sedit "s/-pedantic//" src/Makefile.am                        &&
  ./configure  --build=${BUILD}            \
               --prefix=${INSTALL_ROOT}/usr/              \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install

) > ${C_FIFO} 2>&1
