(

  cp -f $SCRIPT_DIRECTORY/Makefile.in .                       &&
  aclocal                                                     &&
  autoconf                                                    &&
  CFLAGS="$CFLAGS -DGL_GLEXT_LEGACY"                          &&
sedit "s/LIBS=\"-lpng/LIBS=\"-lpng -lz -lm/g" configure         &&
  ./configure  --build=${BUILD}                               \
               --prefix=${INSTALL_ROOT}/usr                   \
               --bindir=${INSTALL_ROOT}/usr/games             \
               --sysconfdir=${INSTALL_ROOT}/etc               \
               --localstatedir=${INSTALL_ROOT}/var            \
               --mandir=${INSTALL_ROOT}/usr/share/man         &&
               ${OPTS}                                        &&
  make                                                        &&
  prepare_install                                             &&
  # not automatic
  install  --directory  /usr/games                            &&
  make    install

)  >  ${C_FIFO}  2>&1
