(

  aclocal                               &&
  autoconf                              &&
  ./configure  --prefix=/usr        	\
               --bindir=/usr/games	\
               --mandir=/usr/share/man	&&
  make					&&
  prepare_install			&&
  install  --directory  /usr/games	&&	# not automatic
  make    install

) > $C_FIFO 2>&1
