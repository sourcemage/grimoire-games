(

  ./configure  --prefix=${INSTALL_ROOT}/usr             \
               --sysconfdir=${INSTALL_ROOT}/etc         \
               --localstatedir=${INSTALL_ROOT}/var/lib  \
               --bindir=${INSTALL_ROOT}/usr/games       \
               --with-x                  \
	       $OPTS                     &&
  make                                   &&
  prepare_install                        &&
  make    install                        &&
  cd      /usr/share/crossfire           &&
  unpack  ${SOURCE2}  ${MD5[1]}          &&
  unpack  ${SOURCE3}  ${MD5[2]}          &&
  unpack  ${SOURCE4}  ${MD5[3]}

) > $C_FIFO 2>&1
