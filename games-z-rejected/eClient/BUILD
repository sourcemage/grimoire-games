(

  cd  ${SPELL}                                       &&
  I_DIR="${INSTALL_ROOT}/usr/share/games/$SPELL"     &&

  prepare_install                                    &&
  install  -d  -m0775  -o root  -g  games  ${I_DIR}  &&
  cp  -aRp  *  ${I_DIR}                              &&
  chown  -R  root.games  ${I_DIR}                    &&
  chmod  -R  g+w  ${I_DIR}                           &&

  install  -m0775  -o  root  -g  games                      \
    ${SOURCE_CACHE}/${SOURCE2}   ${I_DIR}                   &&
  install  -m0775  ${SCRIPT_DIRECTORY}/eClient  /usr/games

)  >  ${C_FIFO}  2>&1
