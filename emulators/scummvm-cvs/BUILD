(

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

  cd $SOURCE_DIRECTORY/backends/sdl		&&
  patch -p0 < $SCRIPT_DIRECTORY/rules.diff	&&
  cd $SOURCE_DIRECTORY				&&

  ./configure			&&

  cp -f Makefile Makefile.orig					&&
  sed -e "s@^DEFINES[[:blank:]]*+=.*-DUSE_MAD@DEFINES  +=${DEFINES}@g"	\
  -e "s@^LIBS[[:blank:]]*+=.*-lmad@LIBS  +=${LIBS}@g"		\
  -e "s@^CXXFLAGS[[:blank:]]*:=.*-g -O@CXXFLAGS  +=${CXXFLAGS}@g"	\
  -e "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"	\
  Makefile.orig > Makefile					&&


  make                        	&&
  prepare_install             	&&
  install -m0755 scummvm /usr/games/scummvm	&&
  install -m0644 scummvm.xpm /usr/share/icons


) > $C_FIFO 2>&1
