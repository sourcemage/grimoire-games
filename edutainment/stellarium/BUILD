(
autoconf &&
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/share/games/$SPELL \
                 $OPTS                 &&
  make                                 &&
  prepare_install                      &&
  mkdir -p ${INSTALL_ROOT}/usr/games   &&
  make install                         &&
echo -e "#!/bin/sh \n
# Needs ~/stellarium to start. \n
if [ ! -d ~/.stellarium ] \n  then mkdir ~/.stellarium\nfi\n
${INSTALL_ROOT}/usr/share/games/stellarium/stellarium \$*" >binscript &&

install binscript ${INSTALL_ROOT}/usr/games/stellarium
 
) > $C_FIFO 2>&1
