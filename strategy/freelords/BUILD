(
#peculiar hacks for gcc3.3 ?
#i can only assume gcc headers dont include glibc's assert.h ?
sedit  '18a\
\#include \<assert.h\>\' src/stack.h &&
sedit  '19a\
\#include \<assert.h\>\' src/ArmyInfo.h &&
#end gcc3.3 hack
  autoconf &&	 
  
  ./configure  --build=${BUILD}            		  \
	       --bindir=/usr/games         		  \
	       --datadir=${INSTALL_ROOT}/usr/share/games \
	       --prefix=${INSTALL_ROOT}/usr   		  \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var        \
               CPPFLAGS=${CPPFLAGS}        \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make install                             &&
  #install config file globally
  cp  ${SCRIPT_DIRECTORY}/freelordsrc  /etc                    &&
  chown  root.games  /etc/freelordsrc      &&
  chmod 664  /etc/freelordsrc

)  >  ${C_FIFO}  2>&1
