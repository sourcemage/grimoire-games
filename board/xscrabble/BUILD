(

  sedit  's:../xscrabble_$2.tgz:xscrabble_$2.tgz:g'  build  &&
  sedit  's:games/bin:games:'                        build  &&
  sedit  's:games/lib:share/games:'                  build  &&

  ./build  bin                &&
  prepare_install             &&
  ./build  install            &&
  ./build  lang  en           &&
  sedit  's:games/lib:share/games:g'      \
         /etc/X11/app-defaults/XScrabble  &&
  chown  -R  root.games  /usr/share/games/scrabble

)  >  ${C_FIFO}  2>&1
