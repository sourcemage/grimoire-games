(

  cd  snes9x          &&
  patch  -p0  <  $SCRIPT_DIRECTORY/Makefile.in.patch  &&
  patch  -p0  <  $SCRIPT_DIRECTORY/configure.patch    &&
  ./configure  $OPTS  &&
  make  snes9x        &&
  prepare_install     &&
  install  -m 755  snes9x  /usr/games

) > $C_FIFO 2>&1
