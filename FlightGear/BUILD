(

  ./configure  --prefix=/usr               \
               --bindir=/usr/games         \
               --datadir=/usr/share/games  \
               --libdir=/usr/share/games   \
               --mandir=/usr/share/man     &&
  make                                     &&
  prepare_install                          &&
  make    install

) > ${C_FIFO} 2>&1
