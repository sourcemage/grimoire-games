(

  ./configure  --prefix=/usr                                    \
               --bindir=/usr/games                              \
               --disable-sdltest                                \
               --with-data-dir=/usr/share/$SPELL-data-$VERSION  &&
  make                                                          &&
  prepare_install                                               &&
  make    install                                               &&
  chmod  -R a+r  $SPELL-data-$VERSION                           &&
  cp     -r      $SPELL-data-$VERSION  /usr/share

) > $C_FIFO 2>&1
