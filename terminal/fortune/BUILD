
# the pre-packaged rot tool doesnt work on ppc for some reason, but
# tr works everywhere
sedit 's:ROT=../../util/rot:ROT=tr A-Za-z N-ZA-Mn-za-m:' \
       $SOURCE_DIRECTORY/datfiles/off/Makefile       &&
patch  -p1  <  ${SCRIPT_DIRECTORY}/zippy.patch       &&
persistent_add  LOCATIONS                            &&

LOCATIONS="   FORTDIR=${INSTALL_ROOT}/usr/games
            COOKIEDIR=${INSTALL_ROOT}/usr/share/games/fortunes
               BINDIR=${INSTALL_ROOT}/usr/bin
            BINMANDIR=${INSTALL_ROOT}/usr/man/man1
           FORTMANDIR=${INSTALL_ROOT}/usr/man/man6"  &&

make  $LOCATIONS
