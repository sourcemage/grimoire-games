(
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
		 --bindir=${INSTALL_ROOT}/usr/games		\
                 $OPTS                                          &&
  make                                                          &&
  prepare_install                                               &&
  mkdir -p ${INSTALL_ROOT}/usr/share/games/$SPELL               &&
  make install

)  >  ${C_FIFO}  2>&1
