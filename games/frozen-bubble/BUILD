(

  make  PREFIX=${INSTALL_ROOT}/usr  OPTIMIZE="$CFLAGS"  &&
  prepare_install                        &&
  make  install  PREFIX=${INSTALL_ROOT}/usr             &&
  mkdir -p /usr/games			 &&
  mv  /usr/bin/frozen-bubble   /usr/games

) > $C_FIFO 2>&1
