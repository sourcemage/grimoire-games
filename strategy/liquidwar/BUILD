(
  patch -p1 < $SCRIPT_DIRECTORY/liquidwar-5.5.9-gcc3.3.X.diff &&
  ./configure    --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games      \
                 $OPTS                 &&
  make                                 &&
  prepare_install                      &&
  make install

)  >  ${C_FIFO}  2>&1
