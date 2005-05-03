sedit "s/tcl8.0/tcl8.4/g" configure    &&

./configure  --prefix=${INSTALL_ROOT}/usr             \
             --sysconfdir=${INSTALL_ROOT}/etc         \
             --localstatedir=${INSTALL_ROOT}/var/lib  \
             --bindir=${INSTALL_ROOT}/usr/games       \
             --with-x                  \
             $OPTS                     &&
make
