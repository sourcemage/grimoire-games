(

  ./configure  --build=$BUILD        \
               --prefix=/usr/share/  \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               --bindir=/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
