(

  sedit  "s/-O3 -g3 -Wall/$CFLAGS/"  configure

  ./configure  --build=$BUILD        \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
