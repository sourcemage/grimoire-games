patch -p1 < $SCRIPT_DIRECTORY/0.6.0-gcc3.patch			&&
patch -p0 < $SCRIPT_DIRECTORY/0.6.0-gcc34.patch			&&

  sh  ./autogen.sh  &&
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/games		\
                 $OPTS
