(

  ./configure  --build=${BUILD}            \
               --prefix=/usr/share         \
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
  unpack  ${SOURCE2}   ${MD5[1]}           &&
  unpack  ${SOURCE3}   ${MD5[2]}           &&
  unpack  ${SOURCE4}   ${MD5[3]}           &&
  unpack  ${SOURCE5}   ${MD5[4]}           &&
  unpack  ${SOURCE6}   ${MD5[5]}           &&
  unpack  ${SOURCE7}   ${MD5[6]}           &&
  chgrp  -R  games  *

) > $C_FIFO 2>&1
