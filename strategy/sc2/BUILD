(

  echo  "\n"  |  ./build.sh  uqm  config  &&

  sedit  's:/usr/local/games/:/usr/share/games/:'  config.state              &&
  sedit  's:/usr/local/games/bin/:/usr/games/:'  build.vars                  &&
  sedit  's:/usr/local/games/lib/:/usr/share/games/${SPELL}/:'  build.vars   &&
  sedit  's:/usr/local/games:/usr/share/games:'  build/build.config          &&
  sedit  's:/usr/local/games/lib/uqm/content:/usr/share/games/sc2/content:'  \
    src/config.h                                                             &&

  ./build.sh  uqm  depend                 &&
  ./build.sh  uqm                         &&
  prepare_install                         &&
  install  -d  -o  games  -m  755         \
    /usr/share/games/${SPELL}/content     &&
  install  -o  games  -m  755             \
    uqm-debug  /usr/games                 &&
  chown  -R  games  content               &&
  chmod  -R  755  content                 &&
  cp  -aRp  content/*                     \
    /usr/share/games/${SPELL}/content     &&
  ln  -sf  /usr/games/uqm-debug           \
           /usr/games/sc2

)  >  ${C_FIFO}  2>&1
