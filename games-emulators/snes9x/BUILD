(

  cd  snes9x          &&

  sedit  "s/@OPTIMIZE@/$CFLAGS -fno-exceptions/"  Makefile.in  &&
  sedit  "s/-lm/& $LDFLAGS/"  Makefile.in  &&
  sedit  's/ [^ ]*zlib[^ ]*//'  Makefile.in  &&
  sedit  's/GUIOBJS)$/& $(OPENGLOBJS)/'  Makefile.in  &&

  ./configure  $OPTS  &&
  make  snes9x        &&
  prepare_install     &&
  install  -m 755  snes9x  /usr/games

) > $C_FIFO 2>&1
