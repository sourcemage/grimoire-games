(

  G_DIR="/usr/share/games/${SPELL}"

  rm  -f  game                                                     &&
  make                                                             &&
  prepare_install                                                  &&
  install  -d  -m  755  ${G_DIR}                                   &&
  install  -d  -m  755  ${G_DIR}/data                              &&
  install  -d  -m  755  ${G_DIR}/data/creatures                    &&
  install  -d  -m  755  ${G_DIR}/data/objs                         &&
  install  -d  -m  755  ${G_DIR}/levels                            &&
  install  -m  755  game  ${G_DIR}                                 &&
  install  -m  644  data/*.png  ${G_DIR}/data                      &&
  install  -m  644  data/creatures/*.png  ${G_DIR}/data/creatures  &&
  install  -m  644  data/objs/*.png  ${G_DIR}/data/objs            &&
  install  -m  644  levels/*.lvl  ${G_DIR}/levels                  &&
  install  -m  755  ${SCRIPT_DIRECTORY}/${SPELL}  /usr/games

)  >  $C_FIFO  2>&1
