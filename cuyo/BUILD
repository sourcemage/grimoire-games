(

  ./configure  --build=${BUILD}            \
               --prefix=/usr/              \
               --datadir=/usr/share/games  \
               --sysconfdir=/etc           \
               --localstatedir=/var/games  \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install

) > ${C_FIFO} 2>&1
