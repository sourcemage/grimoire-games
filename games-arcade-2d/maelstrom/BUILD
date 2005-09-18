patch -p1 < $SCRIPT_DIRECTORY/maelstrom-3.0.6-security.patch	&&
patch -p1 < $SCRIPT_DIRECTORY/maelstrom-gcc34.patch		&&
./configure --prefix=${INSTALL_ROOT}/usr/share \
            --sysconfdir=${INSTALL_ROOT}/etc \
            --bindir=${INSTALL_ROOT}/usr/share/games/Maelstrom \
            --datadir=${INSTALL_ROOT}/usr/share/games \
            --localstatedir=${INSTALL_ROOT}/var/games \
            --mandir=${INSTALL_ROOT}/usr/share/man \
            --infodir=${INSTALL_ROOT}/usr/share/info \
            $OPTS &&
make
