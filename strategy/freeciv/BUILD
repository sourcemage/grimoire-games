(

  ./configure  --build=${BUILD}            \
               --prefix=${INSTALL_ROOT}/usr               \
               --bindir=${INSTALL_ROOT}/usr/games         \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
               --enable-client=${CLIENT}   \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install                          &&
  cd  /usr/share/games/${SPELL}            &&
  unpack  ${SOURCE2}  ${MD5[1]}

) > ${C_FIFO} 2>&1
