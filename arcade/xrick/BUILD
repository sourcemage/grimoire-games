(

  sedit  "s/-O2/$CFLAGS/"  Makefile              &&
  make                                           &&
  prepare_install                                &&
  install  -d  -o  games  -m  755                \
    /usr/share/games/${SPELL}                    &&
  install  -o  games  -m  755   xrick            \
    /usr/share/games/${SPELL}                    &&
  install  -o  games  -m  755                    \
    ${SCRIPT_DIRECTORY}/${SPELL}  /usr/games     &&
  install  -m  644  xrick.6.gz  /usr/man/man6    &&
  install  -m  644  data.zip                     \
    /usr/share/games/${SPELL}

) > $C_FIFO 2>&1
