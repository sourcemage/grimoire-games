(

  sedit  "s/MesaGL/GL/g"                   Makefile  &&
  sedit  "s/\/local//"                     Makefile  &&
  sedit  "s/bin/games/"                    Makefile  &&
  if ! [ -h ${INSTALL_ROOT}/usr/X11R6/lib/libXi.so ]
  then sedit "s/-lXi//"                    Makefile  
  fi   &&
  make  SDATADIR=${INSTALL_ROOT}/usr/share/games/ssystem            &&
  prepare_install                                    &&
  make  SDATADIR=${INSTALL_ROOT}/usr/share/games/ssystem  install

) > $C_FIFO 2>&1
