(
  sedit "s/tcl8.0/tcl8.4/g" configure    &&

  ./configure  --prefix=/usr             \
               --sysconfdir=/etc         \
               --localstatedir=/var/lib  \
               --bindir=/usr/games       \
               --with-x                  \
	       $OPTS                     &&
  make                                   &&
  prepare_install                        &&
  make    install                        

) > $C_FIFO 2>&1
