(

  make  PREFIX=/usr  OPTIMIZE="$CFLAGS"  &&
  prepare_install                        &&
  make  install  PREFIX=/usr             &&
  mkdir -p /usr/games			 &&
  mv  /usr/bin/frozen-bubble   /usr/games

) > $C_FIFO 2>&1
