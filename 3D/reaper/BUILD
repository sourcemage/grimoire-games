(
  cd build/ac  &&
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/share/games/reaper \
                 $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make install                       &&
#thanks to Bill&Ted 
echo -e "#! /bin/bash \n exec ${INSTALL_ROOT}/usr/share/games/reaper/reaper -d ${INSTALL_ROOT}/usr/share/games/reaper/ -p ${INSTALL_ROOT}/usr/lib/reaper/ \$*" > reaper_dude &&
install -m755 reaper_dude /usr/games/reaper
)  >  ${C_FIFO}  2>&1
