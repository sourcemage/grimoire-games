if [  "$XMAME_SDL_SOUND"  =  "y"  ];  then
  sedit "s/# SOUND_SDL = 1/SOUND_SDL = 1/" makefile.unix
fi  &&

if list_find "$OPTS" use_alsa; then
  sedit "s/# SOUND_ALSA = 1/SOUND_ALSA = 1/" makefile.unix
fi  &&

if list_find "$OPTS" use_esound; then
  sedit "s/# SOUND_ESOUND = 1/SOUND_ESOUND = 1/" makefile.unix
fi  &&

if [  "$XMAME_SDL_VIDEO"  =  "y"  ];  then
  sedit "s/# DISPLAY_METHOD = SDL/DISPLAY_METHOD = SDL/" makefile.unix
fi  &&

if  [  "$SDL_CUSTOM"  =  "y"  ];  then
  ${EDITOR:-nano}  makefile.unix
fi  &&

# Fix permission problems accessing ${SOURCE_DIRECTORY}/doc/ on install
chown  -R  root.root  src                 &&
rm  doc                                   &&
ln  -sf  src/unix/doc  doc                &&

make  PREFIX=${INSTALL_ROOT}/usr          \
      BINDIR=${INSTALL_ROOT}/usr/games    \
      CFLAGS="${CFLAGS/-O[3-9]/-O2}"      \
      CXXFLAGS="${CXXFLAGS/-O[3-9]/-O2}"  \
      -f  makefile.unix
