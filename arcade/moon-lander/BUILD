(

  chmod  -R  a+rwx  *                          &&
  sedit  "s/usr\/bin/usr\/games/"  install.sh  &&
  make                                         &&
  prepare_install                              &&
  make    install

) > $C_FIFO 2>&1
