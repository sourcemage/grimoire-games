./configure --prefix=${INSTALL_ROOT}/usr              \
        --sysconfdir=${INSTALL_ROOT}/etc              \
            --bindir=${INSTALL_ROOT}/usr/games        \
           --datadir=${INSTALL_ROOT}/usr/share/games  \
     --localstatedir=${INSTALL_ROOT}/var              \
            --mandir=${INSTALL_ROOT}/usr/share/man    \
           --infodir=${INSTALL_ROOT}/usr/share/info   \
                     $OPTS                            &&

sedit  "s:/share/jumpnbump:/share/games/jumpnbump:"  globals.h  &&

make
