(

  ./configure  --build=${BUILD}            \
               --prefix=/usr/share         \
               --bindir=/usr/bin           \
               --sysconfdir=/etc           \
               --localstatedir=/var/games  \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install

)  >  ${C_FIFO}  2>&1
