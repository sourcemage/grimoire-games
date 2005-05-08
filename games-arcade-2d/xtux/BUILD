(

  make   DATADIR=${INSTALL_ROOT}/usr/share/xtux   &&
  prepare_install                                 &&
  mkdir  -p ${INSTALL_ROOT}/usr/share/xtux        &&
  mkdir  -p ${INSTALL_ROOT}/usr/games             &&
  for i in data/* doc scripts
  do cp -rf $i ${INSTALL_ROOT}/usr/share/xtux
  done                                            &&
  cp -f xtux tux_serv ${INSTALL_ROOT}/usr/games

) > ${C_FIFO} 2>&1
