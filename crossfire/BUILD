(

  ./configure  --prefix=/usr             \
               --sysconfdir=/etc         \
               --localstatedir=/var/lib  \
               --bindir=/usr/games       \
               $OPTS                     &&
  make                                   &&
  prepare_install                        &&
  make    install                        &&
  cd      /usr/share/crossfire           &&
  unpack  ${SOURCE2}  ${MD5[1]}          &&
  unpack  ${SOURCE3}  ${MD5[2]}

) > $C_FIFO 2>&1
