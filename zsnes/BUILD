(

  cd src				&&
  ./configure  --build=$BUILD                           \
	       --prefix=/usr                            \
	       --bindir=/usr/games                      \
	       --mandir=/usr/share/man			\
	       $OPTS			&&
  make					&&
  prepare_install			&&
  install  --directory  /usr/games  /usr/share/man/man6	&&	# not automatic
  make install

) > $C_FIFO 2>&1
