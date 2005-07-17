  patch -p1 < $SCRIPT_DIRECTORY/maelstrom-3.0.6-security.patch	&&
  patch -p1 < $SCRIPT_DIRECTORY/maelstrom-gcc34.patch		&&
  ./configure  --build=${BUILD}            \
               --prefix=${INSTALL_ROOT}/usr/share         \
               --bindir=${INSTALL_ROOT}/usr/bin           \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
               ${OPTS}
