(

  LIBS="-lncurses" 				\
  ./configure  --prefix=/usr			\
               --sysconfdir=/etc                \
               --localstatedir=/var             \
               --bindir=/usr/games              \
               --datadir=/usr/share/dopewars    \
               --mandir=/usr/share/man          \
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  make    install

) > $C_FIFO 2>&1  

