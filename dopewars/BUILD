(

  ./configure  --prefix=/usr                 \
               --sysconfdir=/etc             \
               --localstatedir=/var          \
               --bindir=/usr/games           \
               --datadir=/usr/share/dopewars \
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  make    install

) > $C_FIFO 2>&1  

