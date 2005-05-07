  sedit  "s/-O6/$CFLAGS/"  src/Makefile.in          &&
  ./configure  --build=$BUILD                       \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               $OPTS
