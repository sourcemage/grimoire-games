(

  LDFLAGS="-L/usr/X11/lib"               &&
  ./configure  --build=$BUILD            \
               --prefix=/usr             \
               --bindir=/usr/games       \
               --infodir=/usr/share/info \
               --mandir=/usr/share/man   \
               $OPTS            &&
  make                          &&
  prepare_install               &&
  make    install

) > $C_FIFO 2>&1
