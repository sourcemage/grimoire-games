autoconf                                              &&
  
./configure  --build=${BUILD}                         \
            --prefix=${INSTALL_ROOT}/usr              \
            --bindir=/usr/games                       \
           --datadir=${INSTALL_ROOT}/usr/share/games  \
        --sysconfdir=${INSTALL_ROOT}/etc              \
     --localstatedir=${INSTALL_ROOT}/var              \
            CPPFLAGS=${CPPFLAGS}                      \
                     ${OPTS}                          &&
make
