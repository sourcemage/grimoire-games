(

  # Setup for FHS standards, and add our optimizations.  ;)
  sedit  's:local/::'  Makefile
  sedit  "s:CFLAGS = :CFLAGS = ${CFLAGS} :"  Makefile

  N_DIR=/usr/share/games/${SPELL}                                   &&
  rm  game                                                          &&
  make                                                              &&
  prepare_install                                                   &&
  install  -d  -m  755  -g  games  ${N_DIR}                         &&
  install  -d  -m  755  -g  games  ${N_DIR}/data                    &&
  install  -d  -m  755  -g  games  ${N_DIR}/data/obj                &&
  install  -d  -m  755  -g  games  ${N_DIR}/levels                  &&
  install  -m  644  -g  games  data/*.png  data/*.gif  data/*.tif   \
                    ${N_DIR}/data                                   &&
  install  -m  644  -g  games  data/obj/*  ${N_DIR}/data/obj        &&
  install  -m  644  -g  games  levels/level?.dat  ${N_DIR}/levels   &&
  install  -d  -m  755  -g  games  /usr/lib/games/${SPELL}          &&
  install  -m  755  -g  games  game  /usr/lib/games/${SPELL}        &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/nij  /usr/games  &&
  install  -d  -m  755  /usr/doc/${SPELL}                           &&
  install  -m  644  ${SCRIPT_DIRECTORY}/README  /usr/doc/${SPELL}

)  >  $C_FIFO  2>&1
