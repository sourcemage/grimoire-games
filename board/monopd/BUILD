(

  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
	       --datadir=${INSTALL_ROOT}/usr/share/games \	
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
