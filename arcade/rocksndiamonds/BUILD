(

  case  $SDL  in
    y|Y)  OPTS="sdl"  ;;
  esac

  sedit  "s:# RO_GAME_DIR = /usr/games:RO_GAME_DIR=/usr/share/games/$SPELL:"  Makefile
  sedit  "s:# RW_GAME_DIR = /var/games:RW_GAME_DIR=/var/games/$SPELL:"  Makefile
  sedit  "s:CFLAGS =:CFLAGS = $CFLAGS:"  src/Makefile
  make  $OPTS      &&
  prepare_install  &&
  (
    mkdir  -p  /usr/games
    cp  rocksndiamonds  /usr/games
    cp  rocksndiamonds.1  /usr/man/man1
    mkdir  -p  /usr/share/games/rocksndiamonds
    cp  -R  graphics levels music sounds  /usr/share/games/rocksndiamonds
    mkdir  -p  /var/games/rocksndiamonds/scores
    chgrp  -R  games  /var/games/rocksndiamonds
    chmod  -R  g+w    /var/games/rocksndiamonds
  )

) > $C_FIFO 2>&1
