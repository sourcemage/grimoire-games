(

  cd  SDL_mixer_patched              &&
  ./configure                        &&
  make                               &&
  cd  ..                             &&
  make  PREFIX=/usr  OPTIMIZE="$CFLAGS"  &&
  prepare_install                        &&
  make  install  PREFIX=/usr             &&
  mv  /usr/bin/frozen-bubble   /usr/games   &&
  mv  /usr/bin/fb.pl           /usr/games

) > $C_FIFO 2>&1
