(
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/share/games/$SPELL \
                 $OPTS                                          &&
  make                                                          &&
  prepare_install                                               &&
  mkdir -p ${INSTALL_ROOT}/usr/share/games/$SPELL               &&
  make install                                                  &&
  mkdir -p /usr/games                                           &&
  install -m 0755  $SCRIPT_DIRECTORY/dosbox /usr/games
)  >  ${C_FIFO}  2>&1
