(

  sedit  "s/-O2/$CFLAGS/"  configure  &&
  ./configure  --build=$BUILD        \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install                    &&
  make    install-gzipped-man        &&
  make    install-gzipped-info

)  >  ${C_FIFO}  2>&1
