#
# FHS
#
sedit  's!$(PREFIX)/man!$(PREFIX)/share/man!'  sar/Makefile.install.UNIX  &&

./configure  linux --build=$BUILD                           \
                  --prefix=${INSTALL_ROOT}/usr              \
                 --datadir=${INSTALL_ROOT}/usr/share/games  \
              --sysconfdir=${INSTALL_ROOT}/etc              \
           --localstatedir=${INSTALL_ROOT}/var              \
                  --bindir=${INSTALL_ROOT}/usr/games        \
                           $OPTS                            &&
make
