(
  if echo $OPTS| grep -q "with-alsa"; then
     DEFINES="$DEFINES  -DUSE_ALSA"  &&
     LIBS="$LIBS  -lasound"  
  fi  &&
  if echo $OPTS| grep -q "with-mad"; then
    DEFINES="$DEFINES  -DUSE_MAD"  &&
    LIBS="$LIBS  -lmad"  
  fi  &&
  if echo $OPTS| grep -q "with-mad"; then
    DEFINES="$DEFINES  -DUSE_VORBIS"  &&
    LIBS="$LIBS  -lvorbisfile -lvorbis" 
  fi  &&
  cd $SOURCE_DIRECTORY/backends/sdl		&&
  patch -p0 < $SCRIPT_DIRECTORY/rules.diff	&&
  cd $SOURCE_DIRECTORY				&&
echo $LIBS
echo $DEFINES
  ./configure			&&

  cp -f Makefile Makefile.orig					&&
  sed -e "s@^DEFINES[[:blank:]]*+=.*-DUSE_MAD@DEFINES  +=${DEFINES}@g"	\
  -e "s@^LIBS[[:blank:]]*+=.*-lmad@LIBS  +=${LIBS}@g"		\
  -e "s@^CXXFLAGS[[:blank:]]*:=.*-g -O@CXXFLAGS  +=${CXXFLAGS}@g"	\
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"	\
  Makefile.orig > Makefile					&&


  make                        	&&
  prepare_install             	&&
  mkdir -p /usr/games           &&
  install -m0755 scummvm /usr/games/scummvm	&&
  install -m0644 scummvm.xpm /usr/share/icons


) > $C_FIFO 2>&1
