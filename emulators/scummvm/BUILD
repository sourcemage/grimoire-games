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
cd $SOURCE_DIRECTORY				&&

./configure   &&

sedit "s@^DEFINES[[:blank:]]*+=.*-DUSE_MAD@DEFINES  +=${DEFINES}@g" Makefile  &&
sedit "s@^LIBS[[:blank:]]*+=.*-lmad@LIBS  +=${LIBS}@g"              Makefile  &&
sedit "s@^CFLAGS[[:blank:]]*:=.*-g -O@CFLAGS  +=${CFLAGS}@g"        Makefile  &&
sedit "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"          Makefile  &&
# change compiler flags
sedit "s/-O/$CFLAGS/"                                               Makefile  &&

make
