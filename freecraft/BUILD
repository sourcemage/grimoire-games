(

  # Create game directories, if they don't exist
  if  [  !  -d  /usr/games  ]
    then  install  -d  -m  755  -g  bin  /usr/games
  fi

  if  [  !  -d  /usr/share/games/freecraft  ]
    then  install  -d  -m  755  -g  games  /usr/share/games/freecraft
  fi

  # Install game binaries to /usr/games, not /usr/bin
  sedit  's:\$(PREFIX)/bin:\$(PREFIX)/games:'  Makefile

  # Install game libraries to /usr/share/games/freecraft, not /usr/lib/games/freecraft
  sedit  's:\$(PREFIX)/lib/games:\$(PREFIX)/share/games:g'  Makefile

  case  $VIDEO  in
      S|s)  cp  ${SCRIPT_DIRECTORY}/Rules.make.SDL  ./Rules.make
            ;;
      V|v)  cp  ${SCRIPT_DIRECTORY}/Rules.make.V  ./Rules.make
            ;;
      B|b)  cp  ${SCRIPT_DIRECTORY}/Rules.make.VSDL  ./Rules.make
            ;;
    X|x|*)  cp  ${SCRIPT_DIRECTORY}/Rules.make.X  ./Rules.make
            ;;
  esac

  # Use our optimizations...
  sedit  "s:-O2:${CFLAGS}:"  Rules.make

  # Regular sound, which is thread safe
  case  $SOUND  in
    N|n)  sedit  's:DSOUND:#DSOUND:'  Rules.make
          ;;
      *)  true
          ;;
  esac

  if  !  spell_installed  "vorbis-tools"  ;  then
    sedit  's:^OGG:#OGG:'  Rules.make
    sedit  's:^OGGLIB:#OGGLIB:'  Rules.make
    sedit  's:-DUSE_OGG$::'  Rules.make
    sedit  's:\$(OGGLIB)::'  Rules.make
    sedit  's:\$(OGG)::'  Rules.make
  fi

  # Always remove FLAC support until fixed
  #if  !  spell_installed  "flac"  ;  then
    sedit  's:^FLAC:#FLAC:'  Rules.make
    sedit  's:^FLACLIB:#FLACLIB:'  Rules.make
    sedit  's:-DUSE_FLAC$::'  Rules.make
    sedit  's:\$(FLACLIB)::'  Rules.make
    sedit  's:\$(FLAC)::'  Rules.make
  #fi

  if  !  spell_installed  "mad"  ;  then
    sedit  's:MAD:#MAD:'  Rules.make
    sedit  's:MP3LIB:#MP3LIB:'  Rules.make
    sedit  's:-DUSE_MAD::'  Rules.make
    sedit  's:\$(MP3LIB)::'  Rules.make
    sedit  's:\$(MAD)::'  Rules.make
  fi

  make                             &&
  prepare_install                  &&
  make  PREFIX=/usr  install       &&
  cd  /usr/share/games/freecraft   &&
  # Now, unpack the media files...
  # Should update the spell to optionally use
  # the CD, similar to quake2
  unpack  ${SOURCE2}  ${MD5[1]}    &&
  # Now, unpack compressed media files
  for i in `find ./ -type f|grep gz`
  do
    gzip -d $i
  done                             &&
  chmod  755  *  -R                &&
  chown  root.games  *  -R

)  >  $C_FIFO  2>&1
