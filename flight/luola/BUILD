persistent_add  I_DIR                              &&
I_DIR=${INSTALL_ROOT}/usr/share/${SPELL}           &&

./configure  --build=$BUILD                        \
             --prefix=${INSTALL_ROOT}/usr          \
             --bindir=${INSTALL_ROOT}/usr/games    \
             --sysconfdir=${INSTALL_ROOT}/etc      \
             --localstatedir=${INSTALL_ROOT}/var   \
             $OPTS                                 &&
make
