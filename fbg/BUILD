(

  ./configure  --build=$BUILD        \
               --prefix=/usr/share   \
               --bindir=/usr/games   \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

)  >  $C_FIFO  2>&1
