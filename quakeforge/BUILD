(

  ./bootstrap   &&

  ./configure  --build=$BUILD       \
               --prefix=/usr        \
               --bindir=/usr/games  \
               --sysconfdir=/etc    \
               --localstatedir=/var \
               $OPTS                &&
  make                              &&
  prepare_install                   &&
  make    install                   &&

  cp $SOURCE_CACHE/$SOURCE2 /usr/share/games/quakeforge/id1

) > $C_FIFO 2>&1
