(

  LIBS="-lncurses" 				\
  ./configure  --prefix=${INSTALL_ROOT}/usr			\
               --sysconfdir=${INSTALL_ROOT}/etc                \
               --localstatedir=${INSTALL_ROOT}/var             \
               --bindir=${INSTALL_ROOT}/usr/games              \
               --datadir=${INSTALL_ROOT}/usr/share/dopewars    \
               --mandir=${INSTALL_ROOT}/usr/share/man          \
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  make    install

) > $C_FIFO 2>&1  

