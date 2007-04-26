OPTS="--disable=arch-i486 \
      --disable=arch-i586 \
      --disable=arch-i686 \
      --disable=arch-pentiumpro \
      $OPTS"                                                 &&
./configure Linux --build=$BUILD                             \
                  --prefix=${INSTALL_ROOT}/usr               \
                  --datadir=${INSTALL_ROOT}/usr/share/games  \
                  --sysconfdir=${INSTALL_ROOT}/etc           \
                  --mandir=${INSTALL_ROOT}/usr/share/man     \
                  --localstatedir=${INSTALL_ROOT}/var/games  \
                  --bindir=${INSTALL_ROOT}/usr/games         \
                  $OPTS                                      &&
make
