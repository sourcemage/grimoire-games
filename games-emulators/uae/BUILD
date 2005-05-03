(
  MAKE_NJOBS=1
  cd $SOURCE_DIRECTORY	  &&
  ./configure  --build=$BUILD                     \
               --prefix=$INSTALL_ROOT/usr                      \
               --sysconfdir=$INSTALL_ROOT/etc                  \
               --localstatedir=$INSTALL_ROOT/var               \
               $OPTS                              &&
  make                                            &&
  prepare_install  &&
  make install
) > $C_FIFO 2>&1
