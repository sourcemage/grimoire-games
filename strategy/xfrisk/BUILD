(

./configure  --build=$BUILD        \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               $OPTS                 &&
  patch -p1 < $SCRIPT_DIRECTORY/Makefile.xorg.fix.diff
  touch version.h   &&
  make                               &&
  prepare_install                    &&
  make install

)  >  $C_FIFO  2>&1
