(

  prepare_install                              &&
  mkdir  -p  /usr/share/games/${SPELL}          &&
  cp -f -r /usr/src/${SPELL}/* /usr/share/games/${SPELL} &&
  chmod -fR a+r /usr/share/games/${SPELL}/*
  install $SCRIPT_DIRECTORY/simutrans /usr/games

)  >  ${C_FIFO}  2>&1
