(

  ./configure  --build=$BUILD        	\
               --prefix=${INSTALL_ROOT}/usr         	\
	       --bindir=${INSTALL_ROOT}/usr/games   	\
               --mandir=${INSTALL_ROOT}/usr/share/man	\
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
