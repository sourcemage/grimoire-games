(
  sedit "s/\/usr\/local\/bin/${INSTALL_ROOT}\/usr\/games/" setup.py &&
  prepare_install                                                   &&
  mkdir -p {INSTALL_ROOT}/usr/games                                 &&
  echo  y  |  ./setup.py                                            &&
  sedit  's:/usr/local:/usr:' /usr/games/tuxmathscrabble

)  >  ${C_FIFO}  2>&1
