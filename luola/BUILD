(

  ./configure  --prefix=/usr                \
               --bindir=/usr/games          \
               $OPTS                        &&
  make                                      &&
  prepare_install                           &&
  make    install

) > $C_FIFO 2>&1
