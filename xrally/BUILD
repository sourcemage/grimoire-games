(

  sedit  "s/-O3 -g3 -Wall/$CFLAGS/"  configure

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
