(

  DATADIR=/usr/share/games/dominions

  prepare_install                   &&
  mkdir    -p  $DATADIR             &&
  install  -m 644  *.*  $DATADIR    &&
  install  -m 755  domdemo_linux_x86  /usr/games/domdemo  &&
  install  -m 755  $SCRIPT_DIRECTORY/dominions  /usr/games

) > $C_FIFO 2>&1
