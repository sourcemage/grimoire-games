(

  ./configure  --build=$BUILD       \
               --prefix=${INSTALL_ROOT}/usr        \
               --bindir=${INSTALL_ROOT}/usr/games  \
               --sysconfdir=${INSTALL_ROOT}/etc    \
               --localstatedir=${INSTALL_ROOT}/var \
               $OPTS                &&
  make                              &&
  prepare_install                   &&
  make    install                   &&

  unpack $SOURCE2 ${MD5[1]}         &&
  cp $SOURCE_CACHE/$SOURCE2 /usr/share/games/quakeforge/id1

) > $C_FIFO 2>&1
