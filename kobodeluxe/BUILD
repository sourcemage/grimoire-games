(

  cp   configure  configure.original
  sed  's:$(prefix)/games/kobo-deluxe:/var/state/kobo-deluxe:'  \
       configure.original  >  configure

  ./configure  --build=${BUILD}      \
               --prefix=/usr         \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               --bindir=/usr/games   \
               --disable-sdltest     \
               ${KOBO_OGL}           \
               ${KOBO_OSS}           &&
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > ${C_FIFO} 2>&1
