if list_find "$OPTS" use_sdl; then
  sedit "s/# SOUND_SDL = 1/SOUND_SDL = 1/" makefile.unix
fi

if list_find "$OPTS" use_alsa; then
  sedit "s/# SOUND_ALSA = 1/SOUND_ALSA = 1/" makefile.unix
fi

if list_find "$OPTS" use_esound; then
  sedit "s/# SOUND_ESOUND = 1/SOUND_ESOUND = 1/" makefile.unix
fi

if list_find "$OPTS" use_sdl_video; then
  sedit "s/# DISPLAY_METHOD = SDL/DISPLAY_METHOD = SDL/" makefile.unix
fi

case  $CUSTOM in
  y|Y)  ${EDITOR:-nano}  makefile.unix  ;;
esac

rm  -f  $SPELL_CONFIG

(

  I_DIR="/usr/share/games/${SPELL}"         &&

  # Fix permission problems accessing ${SOURCE_DIRECTORY}/doc/ on install
  chown  -R  root.root  src                 &&
  rm  doc                                   &&
  ln  -sf  src/unix/doc  doc                &&

  make  PREFIX=${INSTALL_ROOT}/usr          \
        BINDIR=${INSTALL_ROOT}/usr/games    \
        CFLAGS="${CFLAGS/-O[3-9]/-O2}"	    \
        CXXFLAGS="${CXXFLAGS/-O[3-9]/-O2}"  \
        -f  makefile.unix                   &&
  prepare_install                           &&
  make  PREFIX=${INSTALL_ROOT}/usr          \
        BINDIR=${INSTALL_ROOT}/usr/games    \
        -f  makefile.unix                   \
        install                             &&
  mkdir -p  ${I_DIR}                       &&
  mkdir -p ${I_DIR}/artwork                   &&
  mkdir -p ${I_DIR}/cabinets                  &&
  mkdir -p ${I_DIR}/cfg                       &&
  mkdir -p ${I_DIR}/flyers                    &&
  mkdir -p ${I_DIR}/hi                        &&
  mkdir -p ${I_DIR}/icons                     &&
  mkdir -p ${I_DIR}/ini                       &&
  mkdir -p ${I_DIR}/inp                       &&
  mkdir -p ${I_DIR}/memcard                   &&
  mkdir -p ${I_DIR}/nvram                     &&
  mkdir -p ${I_DIR}/roms                      &&
  mkdir -p ${I_DIR}/samples                   &&
  mkdir -p ${I_DIR}/snap                      &&
  cp  -r  ctrlr  ${I_DIR}                   &&
  chown  -R  root.games  ${I_DIR}

) > $C_FIFO 2>&1
