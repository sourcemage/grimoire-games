(
  I_DIR="${INSTALL_ROOT}/usr/share/games/scummvm"
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

  ./configure			&&

  cp -f Makefile Makefile.orig					&&
  sed -e "s@^DEFINES[[:blank:]]*+=.*-DUSE_MAD@DEFINES  +=${DEFINES}@g"	\
  -e "s@^LIBS[[:blank:]]*+=.*-lmad@LIBS  +=${LIBS}@g"		\
  -e "s@^CFLAGS[[:blank:]]*:=.*-g -O@CFLAGS  +=${CFLAGS}@g"	\
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"	\
  Makefile.orig > Makefile					&&
  # change compiler flags         
  sedit "s/-O/$CFLAGS/" Makefile                                &&

  make                        	        &&
  prepare_install             	        &&
  mkdir -p ${I_DIR}                     &&
  mkdir -p ${INSTALL_ROOT}/usr/games    &&
  install -m0755 scummvm ${I_DIR}	&&
  install -m0644 scummvm.xpm ${I_DIR}   && 
  install -m0644 $SCRIPT_DIRECTORY/scummvmrc ${I_DIR}     &&
  install -m0644 $SCRIPT_DIRECTORY/scummvmrc ${INSTALL_ROOT}/etc/scummvmrc     &&
  install -m0755 $SCRIPT_DIRECTORY/scummvm ${INSTALL_ROOT}/usr/games/scummvm

) > $C_FIFO 2>&1

