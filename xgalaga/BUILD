(

  export CPPFLAGS="$CPPLAGS -D__NO_STRING_INLINES"

  ./configure  --build=$BUILD               \
               --prefix=/usr/share/xgalaga  \
               --exec-prefix=/usr/games     \
               --sysconfdir=/etc            \
               --localstatedir=/var         \
               $OPTS                 &&

  sedit "s:/usr/share/xgalaga/scores:/var/games/xgalaga:" config.h &&
  make                      &&
  prepare_install           &&
  mkdir /usr/share/xgalaga  &&
  make install

) > $C_FIFO 2>&1
