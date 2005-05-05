CFLAGS="$(echo "$CFLAGS" | sed -e 's/-O3//')"      &&
CXXFLAGS="$(echo "$CXXFLAGS" | sed -e 's/-O3//')"  &&

./configure  --build=$BUILD                      \
            --prefix=${INSTALL_ROOT}/usr         \
           --datadir=${INSTALL_ROOT}/usr/share/  \
        --sysconfdir=${INSTALL_ROOT}/etc         \
     --localstatedir=${INSTALL_ROOT}/var         \
            --bindir=${INSTALL_ROOT}/usr/games   \
                     $OPTS                       &&
make
