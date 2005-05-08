(

  INSTBIN="install  -m755  -oroot  -ggames"  &&
  I_DIR=/usr/share/games/doom                &&

  ./configure --prefix=${INSTALL_ROOT}/usr   \
          --sysconfdir=${INSTALL_ROOT}/etc   \
       --localstatedir=${INSTALL_ROOT}/var   \
                       $OPTS                 &&
  make                                       &&
  prepare_install                            &&
  make  install                              &&
  mv  /usr/games/prboom  ${I_DIR}            &&
  cp  doom1.wad  ${I_DIR}                    &&
  ${INSTBIN}  ${SCRIPT_DIRECTORY}/prboom     \
              /usr/games                     &&
  chown  -R  root.games  ${I_DIR}

)  >  ${C_FIFO}  2>&1
