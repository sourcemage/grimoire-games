patch  -p1  <  $SCRIPT_DIRECTORY/gcc-3.4.patch          &&
./configure  --build=$BUILD                             \
             --prefix=${INSTALL_ROOT}/usr               \
             --datadir=${INSTALL_ROOT}/usr/share/games  \
             --sysconfdir=${INSTALL_ROOT}/etc           \
             --localstatedir=${INSTALL_ROOT}/var        \
             --bindir=${INSTALL_ROOT}/usr/games         \
             $OPTS                                      &&
make
