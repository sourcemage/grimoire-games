(
  LIBS='-ltcl8.3 -ltk8.3'		\
  ./configure  --prefix=/usr        	\
               --bindir=/usr/games	\
               --mandir=/usr/share/man	&&
  make					&&
  prepare_install			&&
  make    install

) > $C_FIFO 2>&1
