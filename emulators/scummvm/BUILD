(
  I_DIR="${INSTALL_ROOT}/usr/share/games/scummvm"
  case  $ALSA  in
    y|Y)  DEFINES="$DEFINES  -DUSE_ALSA"  ;
          LIBS="$LIBS  -lasound"  ;;
  esac

  case  $MAD  in
    y|Y)  DEFINES="$DEFINES  -DUSE_MAD"  ;
          LIBS="$LIBS  -lmad"  ;;
  esac

  case  $VORBIS  in
    y|Y)  DEFINES="$DEFINES  -DUSE_VORBIS"  ;
    	  LIBS="$LIBS  -lvorbisfile -lvorbis"  ;;
  esac
#game seems to have better definition without this?
# cd $SOURCE_DIRECTORY/backends/sdl		&&
# patch -p0 < $SCRIPT_DIRECTORY/rules.diff	&&
# cd $SOURCE_DIRECTORY				&&

  ./configure			&&

  cp -f Makefile Makefile.orig					&&
  sed -e "s@^DEFINES[[:blank:]]*+=.*-DUSE_MAD@DEFINES  +=${DEFINES}@g"	\
  -e "s@^LIBS[[:blank:]]*+=.*-lmad@LIBS  +=${LIBS}@g"		\
  -e "s@^CFLAGS[[:blank:]]*:=.*-g -O@CFLAGS  +=${CFLAGS}@g"	\
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"	\
  Makefile.orig > Makefile					&&


  make                        	&&
  prepare_install             	&&
  mkdir -p ${I_DIR}
  install -m0755 scummvm ${I_DIR}	&&
  install -m0644 scummvm.xpm ${I_DIR}          && 
  install -m0644 $SCRIPT_DIRECTORY/scummvmrc ${I_DIR}     &&
  install -m0644 $SCRIPT_DIRECTORY/scummvmrc ${INSTALL_ROOT}/etc/scummvmrc     &&
  install -m0755 $SCRIPT_DIRECTORY/scummvm ${INSTALL_ROOT}/usr/games/scummvm

) > $C_FIFO 2>&1
