(

  sedit  "s/-O2/${CFLAGS}/"  configure

  ./configure  --build=${BUILD}      \
               --prefix=/usr         \
               --bindir=/usr/games   \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  install  --directory  /usr/games   \
           /usr/share/man/man6       &&  # not automatic
  make    install                    \
          BINDIR=/usr/games          \
          MANDIR=/usr/share/man

) > ${C_FIFO} 2>&1
