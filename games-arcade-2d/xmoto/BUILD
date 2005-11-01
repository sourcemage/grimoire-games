MY_OPTS="--prefix=${INSTALL_ROOT}/usr --sysconfdir=${INSTALL_ROOT}/etc --localstatedir=${INSTALL_ROOT}/var  \
         --mandir=${INSTALL_ROOT}/usr/share/man --infodir=${INSTALL_ROOT}/usr/share/info                    \
         --bindir=${INSTALL_ROOT}/usr/games --datadir=${INSTALL_ROOT}/usr/share/games                       \
         --localstatedir=${INSTALL_ROOT}/var/games --build=$BUILD build_alias=$BUILD "                      &&
CFLAGS="$CFLAGS " CXXFLAGS="$CXXFLAGS " LDFLAGS="$LDFLAGS -lm -lz" ./configure $MY_OPTS                     &&
make
