(

  sedit  "s/^LIBS =/& $LDFLAGS/"  Makefile  modify/Makefile  &&
  sedit  "s/-O2 -ffast-math -funroll-loops/$CFLAGS/"  \
            Makefile  modify/Makefile  &&
  sedit  "s/jumpnbump.svgalib jumpnbump.fbcon//"  Makefile  &&

  rm jumpnbump.fbcon jumpnbump.svgalib  &&

  make  PREFIX=$INSTALL_ROOT/usr  &&
  prepare_install  &&
  make  PREFIX=$INSTALL_ROOT/usr  install

) > $C_FIFO 2>&1
