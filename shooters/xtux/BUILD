(

  make   DATADIR=${INSTALL_ROOT}/usr/share/xtux               &&
  prepare_install                              &&
  mkdir  -p /usr/share/xtux                    &&
  mkdir  -p /usr/games                         &&
  mv     data/* doc/ scripts/ /usr/share/xtux  &&
  mv     xtux tux_serv /usr/games

) > ${C_FIFO} 2>&1
