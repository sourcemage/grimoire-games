OPTS="$WZ2100OPTS \
      $OPTS \
      --bindir=/usr/share/games/warzone2100 \
      --datadir=${INSTALL_ROOT}/usr/share/games"  &&
invoke_gcc &&
./configure --prefix=${INSTALL_ROOT}/usr \
            --sysconfdir=${INSTALL_ROOT}/etc \
            --localstatedir=${INSTALL_ROOT}/var \
            --mandir=${INSTALL_ROOT}/usr/share/man \
            --infodir=${INSTALL_ROOT}/usr/share/info $OPTS &&

make GFX=$WZ21R

