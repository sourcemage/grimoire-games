(

  ./configure  --build=$BUILD			\
	       --prefix=/usr                    \
               --localstatedir=/var/games       \
               --bindir=/usr/games              \
               --datadir=/usr/share/games    	\
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  mkdir -p /usr/games/enigma                 &&
  make    install

) > $C_FIFO 2>&1  
