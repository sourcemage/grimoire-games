(
export      CPPFLAGS="$CPPFLAGS -I/usr/include/gdk-pixbuf-1.0" &&
  ./configure  --build=${BUILD}      \
               --prefix=/usr         \
               --bindir=/usr/games   \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > ${C_FIFO} 2>&1
