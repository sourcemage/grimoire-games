(

  ./configure  --build=$BUILD                                   \
               --prefix=${INSTALL_ROOT}/usr/share/games         \
               --bindir=${INSTALL_ROOT}/usr/games               \
               $OPTS                                            &&
  make                                                          &&
  prepare_install                                               &&
  make    install

) > $C_FIFO 2>&1
