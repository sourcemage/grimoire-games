(

  sedit  "s/MesaGL/GL/g"                   Makefile  &&
  sedit  "s/\/local//"                     Makefile  &&
  sedit  "s/bin/games/"                    Makefile  &&
  make  SDATADIR=${INSTALL_ROOT}/usr/share/games/ssystem            &&
  prepare_install                                    &&
  make  SDATADIR=${INSTALL_ROOT}/usr/share/games/ssystem  install

) > $C_FIFO 2>&1
