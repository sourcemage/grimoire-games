(

  I_DIR="/usr/share/games/${SPELL}"

  cd  src                                                       &&
  make                                                          &&
  prepare_install                                               &&
  rm  -rf  common/CVS  graphic/CVS                              &&
  install  -d  755  -g  games  ${I_DIR}                         &&
  install  -d  755  -g  games  ${I_DIR}/common                  &&
  install  -d  755  -g  games  ${I_DIR}/graphic                 &&
  install  -m  755  -g  games  fl  ${I_DIR}                     &&
  install  -m  755  -g  games  freelords  ${I_DIR}              &&
  install  -m  755  -g  games  genmap.py  ${I_DIR}              &&
  install  -m  644  -g  games  common/*.so*  ${I_DIR}/common    &&
  install  -m  644  -g  games  graphic/*.so*  ${I_DIR}/graphic  &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/freelords  /usr/games

)  >  $C_FIFO  2>&1
