(

  ./configure  --prefix=${INSTALL_ROOT}/usr/share/games  \
                $OPTS  &&
  make                 &&
  prepare_install      &&
  make    install      &&
  mv ${INSTALL_ROOT}/usr/share/games/bin/scorched3d ${INSTALL_ROOT}/usr/games

) > $C_FIFO 2>&1
