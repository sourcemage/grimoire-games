(

  cp -f Makefile Makefile.orig                                    &&
  sed -e "s@^CFLAGS[[:blank:]]*:=.*-g -O@CFLAGS  +=${CFLAGS}@g"   \
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"         \
  -e "s@^CXXFLAGS[[:blank:]]*:=.*-g -O@CXXFLAGS  +=${CXXFLAGS}@g" \
  Makefile.orig > Makefile                                        &&


  make                                                    &&
  prepare_install                                         &&
  if [ "$CVS" = "no" ] ; then install -m0755 descumm /usr/games/descumm ; fi &&
  install -m0755 descumm /usr/games/descumm               &&
  install -m0755 extract /usr/games/extract               &&
  install -m0755 rescumm /usr/games/rescumm               &&
  install -m0755 simon1decr /usr/games/simon1decr         &&
  install -m0755 simon2mp3 /usr/games/simon2mp3           &&
  if [ "$CVS" = "yes" ] ; then
  install -m0755 mm_nes_extract /usr/games/mm_nes_extract &&
  install -m0755 desword2 /usr/games/desword2             &&
  install -m0755 queenrebuild /usr/games/queenrebuild     &&
  install -m0755 convbdf /usr/games/convbdf               
  fi
) > $C_FIFO 2>&1
