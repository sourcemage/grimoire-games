  cp   configure  configure.original
  sed  's:$(prefix)/games/kobo-deluxe:/var/state/kobo-deluxe:'  \
       configure.original  >  configure

  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --disable-sdltest     \
               ${KOBO_OGL}           \
               ${KOBO_OSS}           &&
               ${OPTS} 
