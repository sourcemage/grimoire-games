(
  sedit 's!$(PREFIX)/man!$(PREFIX)/share/man!' sar/Makefile.install.UNIX  # FHS 
  ./configure  linux --build=$BUILD        			\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/games		\
                 $OPTS                 &&
  make                &&
  prepare_install     &&
  make    install
mkdir -p ${INSTALL_ROOT}/usr/share/games/$SPELL			&&
cd  ${INSTALL_ROOT}/usr/share/games/$SPELL 			&&
unpack ${SOURCE2} ${MD5[1]}

) > $C_FIFO 2>&1
