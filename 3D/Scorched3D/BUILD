(

  sedit  "s:-lGLU:-lglut:"  configure.ac  &&

  ./configure  --prefix=${INSTALL_ROOT}/usr/share/games  \
                $OPTS  &&
  make                 &&
  prepare_install      &&
  make    install      &&
  mv ${INSTALL_ROOT}/usr/share/games/scorched3d/scorched3d  \
     ${INSTALL_ROOT}/usr/games  &&
  strip  ${INSTALL_ROOT}/usr/games/scorched3d

) > $C_FIFO 2>&1
