(

  patch  -p1  <  $SCRIPT_DIRECTORY/Makefiles.patch  &&
  cp  Makefile.doit  Makefile  &&
  make             &&
  prepare_install  &&
  cp  -R  bin  /usr/share/mahjongg3d  &&
  mkdir  -p  /usr/games               &&
  install -m 755  $SCRIPT_DIRECTORY/mahjongg3d  /usr/games

) > $C_FIFO 2>&1
