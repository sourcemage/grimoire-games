(

  ./configure  --build=$BUILD              \
               --prefix=/usr               \
               --bindir=/usr/games         \
               --datadir=/usr/share/games  \
               --sysconfdir=/etc           \
               --localstatedir=/var/games  \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
