(

  sedit  "s:\-O2:${CFLAGS}:"  Makefile
  sedit  "s:\-lGLU:\-L/usr/X11R6/lib \-lGLU:"  Makefile

  N_DIR=/usr/share/games/${SPELL}                         &&
  make                                                    &&
  prepare_install                                         &&
  install  -d  -m  755  -g  games  ${N_DIR}               &&
  install  -d  -m  755  -g  games  ${N_DIR}/sounds        &&
  install  -d  -m  755  -g  games  ${N_DIR}/textures      &&
  install  -m  644  -g  games  sounds/*.wav               \
           ${N_DIR}/sounds                                &&
  install  -m  644  -g  games  textures/*.png             \
           textures/*.jpg  ${N_DIR}/textures              &&
  install  -m  755  -g  games  glast  ${N_DIR}            &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/glast  \
           /usr/games

)  >  $C_FIFO  2>&1
