(
#gcc3.3 hack
if gcc -dumpversion > /dev/null ==3.3 ; then
sedit '18a\
\#include \<assert.h\>\' gameobject.cc 
fi &&
  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
	       --datadir=${INSTALL_ROOT}/usr/share/games \	
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
