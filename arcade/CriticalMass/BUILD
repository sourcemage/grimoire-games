(
 ./autogen.sh							&&
  
 ./configure  --prefix=${INSTALL_ROOT}/usr                      \
              --bindir=${INSTALL_ROOT}/usr/games                \
              --datadir=${INSTALL_ROOT}/usr/share/games 	\
              --sysconfdir=${INSTALL_ROOT}/etc     		\
              --localstatedir=${INSTALL_ROOT}/var  		\
             $OPTS                &&
  make                            &&
  prepare_install                 &&
  make    install

) > $C_FIFO 2>&1
