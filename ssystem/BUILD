(

  sedit  "s/MesaGL/GL/g"                   Makefile  &&
  sedit  "s/\/local//"                     Makefile  &&
  sedit  "s/bin/games/"                    Makefile  &&
  make  SDATADIR=/usr/share/games/ssystem            &&
  prepare_install                                    &&
  make  SDATADIR=/usr/share/games/ssystem  install

) > $C_FIFO 2>&1
