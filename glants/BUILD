(

  # Add our optimizations.  ;)
  sedit  "s:CFLAGS = :CFLAGS = ${CFLAGS} :"  src/Makefile

  N_DIR=/usr/share/games/${SPELL}                                        &&
  make  clean                                                            &&
  make                                                                   &&
  install  -d  -m  755  -g  games  ${N_DIR}                              &&
  install  -d  -m  755  -g  games  ${N_DIR}/data                         &&
  install  -m  644  -g  games  data/*.ilf  ${N_DIR}/data                 &&
  install  -m  755  -g  games  ${SPELL}  ${N_DIR}/${SPELL}               &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/${SPELL}  /usr/games

)  >  $C_FIFO  2>&1
