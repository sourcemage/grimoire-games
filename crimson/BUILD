(

  ./configure  --build=$BUILD			\
               --prefix=/usr			\
               --bindir=/usr/games		\
	       --datadir=/usr/share/games	\
	       --mandir=/usr/share/man		\
	       $OPTS
  make                              &&
  prepare_install                   &&
  make    install

) > $C_FIFO 2>&1
