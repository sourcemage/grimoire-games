(

  sedit  "s/-O2/${CFLAGS}/"  configure

  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  install  --directory  /usr/games   \
           /usr/share/man/man6       &&  # not automatic
  make    install                    \
          BINDIR=${INSTALL_ROOT}/usr/games          \
          MANDIR=${INSTALL_ROOT}/usr/share/man

) > ${C_FIFO} 2>&1
