(

  ./configure  --build=${BUILD}            \
               --prefix=/usr               \
               --bindir=/usr/games         \
               --datadir=/usr/share/games  \
               --sysconfdir=/etc           \
               --localstatedir=/var/games  \
               --enable-client=${CLIENT}   \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install                          &&
  cd  /usr/share/games/${SPELL}            &&
  unpack  ${SOURCE2}  ${MD5[1]}

) > ${C_FIFO} 2>&1
