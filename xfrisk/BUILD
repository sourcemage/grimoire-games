(

  sedit  "s:CFLAGS=:CFLAGS=${CFLAGS} :"  Makefile
  sedit  's:usr/local:usr:'  Makefile
  sedit  's:$(PREFIX)/lib:$(PREFIX)/share/games:'  Makefile
  sedit  's:$(PREFIX)/bin:$(PREFIX)/games:'  Makefile

  make                               &&
  prepare_install                    &&
  make    install

)  >  $C_FIFO  2>&1
