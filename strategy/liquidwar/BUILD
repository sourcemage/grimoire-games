(

  ./configure    --prefix=${INSTALL_ROOT}/usr              \
                --datadir=${INSTALL_ROOT}/usr/share/games  \
                 $OPTS                                     &&
  make                                                     &&
  prepare_install                                          &&
  make install

)  >  ${C_FIFO}  2>&1
