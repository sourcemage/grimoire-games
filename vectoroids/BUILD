(

  sedit  's:$(PREFIX)/bin:$(PREFIX)/games:'  Makefile
  sedit  's:MAN_PREFIX=$(PREFIX):MAN_PREFIX=$(PREFIX)/share:'  Makefile	  # FHS
  install  --directory  /usr/games	&&	# not automatic
  make  PREFIX=/usr			&&
  prepare_install			&&
  make  PREFIX=/usr  install

) > $C_FIFO 2>&1
