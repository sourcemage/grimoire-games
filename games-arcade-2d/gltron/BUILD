./configure  --prefix=${INSTALL_ROOT}/usr                     \
             --bindir=${INSTALL_ROOT}/usr/games               \
             --datadir=${INSTALL_ROOT}/usr/share/games        \
             --sysconfdir=${INSTALL_ROOT}/etc                 \
             --localstatedir=${INSTALL_ROOT}/var              \
             ${OPTS}                                          &&
sed -i "s/-O2/${CFLAGS}/"  Makefile                           &&
make         

