(

  LDFLAGS="-L/usr/X11/lib"               &&
  ./configure  --build=$BUILD            \
               --prefix=${INSTALL_ROOT}/usr             \
               --bindir=${INSTALL_ROOT}/usr/games       \
               --infodir=${INSTALL_ROOT}/usr/share/info \
               --mandir=${INSTALL_ROOT}/usr/share/man   \
               $OPTS            &&
  make                          &&
  prepare_install               &&
  make    install

) > $C_FIFO 2>&1
