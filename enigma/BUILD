(

  ./configure  --build=$BUILD			\
	       --prefix=/usr                    \
               --localstatedir=/var/games       \
               --bindir=/usr/games              \
               --datadir=/usr/share/games    	\
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  make    install

) > $C_FIFO 2>&1  
