(

  sedit  "s/-O6/$CFLAGS/"  src/Makefile.in          &&
  patch -p1 < $SCRIPT_DIRECTORY/crack-attack-1.1.8-gcc3.3.X.patch &&
  ./configure  --build=$BUILD                       \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
