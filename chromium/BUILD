(

  ./configure  $OPTS              &&
  make                            &&
  prepare_install                 &&
  cp  bin/chromium  /usr/libexec  &&
  cp  $SCRIPT_DIRECTORY/chromium  /usr/games

) > $C_FIFO 2>&1
