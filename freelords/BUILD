(

  I_DIR="/usr/share/games/${SPELL}"

  ./configure  --build=${BUILD}                                             \
               --prefix=/usr/share                                          \
               --sysconfdir=/etc                                            \
               --localstatedir=/var                                         \
               ${OPTS}                                                      &&
  make                                                                      &&
  prepare_install                                                           &&
  install  -d  755  -g  games  ${I_DIR}                                     &&
  install  -d  755  -g  games  ${I_DIR}/ai                                  &&
  install  -d  755  -g  games  ${I_DIR}/server                              &&
  install  -d  755  -g  games  ${I_DIR}/common                              &&
  install  -d  755  -g  games  ${I_DIR}/graphic                             &&
  install  -d  755  -g  games  ${I_DIR}/pic/various                         &&
  install  -d  755  -g  games  ${I_DIR}/pic/map/default                     &&
  install  -d  755  -g  games  ${I_DIR}/pic/army                            &&
  install  -d  755  -g  games  ${I_DIR}/pic/army/third_age                  &&
  install  -m  755  -g  games  pic/various/*  ${I_DIR}/pic/various          &&
  install  -m  755  -g  games  pic/army/default.*  ${I_DIR}/pic/army        &&
  install  -m  755  -g  games  pic/army/third_age/*                         \
                               ${I_DIR}/pic/army/third_age                  &&
  install  -m  755  -g  games  pic/map/default/*  ${I_DIR}/pic/map/default  &&
  cd  src                                                                   &&
  install  -m  755  -g  games  freelords  ${I_DIR}                          &&
  install  -m  755  -g  games  genmap.py  ${I_DIR}                          &&
  install  -m  755  -g  games  ai/*  ${I_DIR}/ai                            &&
  install  -m  755  -g  games  server/*.so.0.1.0  /usr/lib                  &&
  ln  -sf  /usr/lib/libflserver.so.0.1.0  /usr/lib/libflserver.so           &&
  install  -m  644  -g  games  common/*.so.0.1.0  /usr/lib                  &&
  ln  -sf  /usr/lib/libflcommon.so.0.1.0  /usr/lib/libflcommon.so           &&
  install  -m  644  -g  games  graphic/*.so.0.1.0  /usr/lib                 &&
  ln  -sf  /usr/lib/libflgraphic.so.0.1.0  /usr/lib/libflgraphic.so         &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/freelords  /usr/games

)  >  ${C_FIFO}  2>&1
