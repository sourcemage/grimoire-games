(

  ./configure  --build=${BUILD}            \
               --prefix=${INSTALL_ROOT}/usr/              \
               --libdir=${INSTALL_ROOT}/usr/lib              \
               --bindir=${INSTALL_ROOT}/usr/games           \
               --datadir=${INSTALL_ROOT}/usr/share/games        \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
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
