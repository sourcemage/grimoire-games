(
export      CPPFLAGS="$CPPFLAGS -I/usr/include/gdk-pixbuf-1.0" &&
  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > ${C_FIFO} 2>&1
