patch  -p1  <  ${SCRIPT_DIRECTORY}/zippy.patch       &&
persistent_add  LOCATIONS                            &&

LOCATIONS="   FORTDIR=${INSTALL_ROOT}/usr/games
            COOKIEDIR=${INSTALL_ROOT}/usr/share/games/fortunes
               BINDIR=${INSTALL_ROOT}/usr/bin
            BINMANDIR=${INSTALL_ROOT}/usr/man/man1
           FORTMANDIR=${INSTALL_ROOT}/usr/man/man6"  &&

make  $LOCATIONS
