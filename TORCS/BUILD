(

  ./configure  --build=${BUILD}            \
               --prefix=/usr/              \
               --exec-prefix=/usr/games    \
               --bindir=/usr/bin           \
               --datadir=/usr/share        \
               --sysconfdir=/etc           \
               --localstatedir=/var/games  \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install                          &&
  cd  /usr/share/games/torcs               &&
  unpack  ${SOURCE3}   ${MD5[2]}           &&
  unpack  ${SOURCE4}   ${MD5[3]}           &&
  unpack  ${SOURCE5}   ${MD5[4]}           &&
  unpack  ${SOURCE6}   ${MD5[5]}           &&
  chgrp  -R  games  *

) > $C_FIFO 2>&1
