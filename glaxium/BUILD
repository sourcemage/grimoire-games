(

  cp -f $SCRIPT_DIRECTORY/Makefile.in .                       &&
  aclocal                                                     &&
  autoconf                                                    &&
  CFLAGS="$CFLAGS -DGL_GLEXT_LEGACY"                          &&
  ./configure  --build=${BUILD}                               \
               --prefix=/usr                                  \
               --bindir=/usr/games                            \
               --sysconfdir=/etc                              \
               --localstatedir=/var                           \
               --mandir=/usr/share/man                        &&
               ${OPTS}                                        &&
  make                                                        &&
  prepare_install                                             &&
  # not automatic
  install  --directory  /usr/games                            &&
  make    install

)  >  ${C_FIFO}  2>&1
