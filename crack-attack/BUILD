(

  sedit  "s/-O6/$CFLAGS/"  src/Makefile.in
  ./configure  --build=$BUILD        \
               --prefix=/usr         \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               --bindir=/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
