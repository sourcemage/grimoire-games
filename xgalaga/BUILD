(

  export CPPFLAGS="$CPPLAGS -D__NO_STRING_INLINES"

  ./configure  --build=$BUILD               \
               --prefix=${INSTALL_ROOT}/usr/share/xgalaga  \
               --exec-prefix=${INSTALL_ROOT}/usr/games     \
               --sysconfdir=${INSTALL_ROOT}/etc            \
               --localstatedir=${INSTALL_ROOT}/var         \
               $OPTS                 &&

  sedit "s:/usr/share/xgalaga/scores:/var/games/xgalaga:" config.h &&
  make                      &&
  prepare_install           &&
  mkdir /usr/share/xgalaga  &&
  make install

) > $C_FIFO 2>&1
