  case  $SDL  in
    y|Y)  OPTS="sdl"  ;;
  esac

  sedit  "s:# RO_GAME_DIR = /usr/games:RO_GAME_DIR=/usr/share/games/$SPELL:"  Makefile
  sedit  "s:# RW_GAME_DIR = /var/games:RW_GAME_DIR=/var/games/$SPELL:"  Makefile
  sedit  "s:CFLAGS =:CFLAGS = $CFLAGS:"  src/Makefile
  make  $OPTS
