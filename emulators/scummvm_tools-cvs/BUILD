(

  cp -f Makefile Makefile.orig					&&
  sed -e "s@^CXXFLAGS[[:blank:]]*:=.*-g -O@CXXFLAGS  +=${CXXFLAGS}@g"	\
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"	\
  Makefile.orig > Makefile					&&


  make                        	&&
  prepare_install             	&&
  install -m0755 descumm /usr/games/descumm	&&
  install -m0755 descumm6 /usr/games/descumm6	&&
  install -m0755 extract /usr/games/extract	&&
  install -m0755 rescumm /usr/games/rescumm	&&
  install -m0755 simon2mp3 /usr/games/simon2mp3

) > $C_FIFO 2>&1
