(

  prepare_install                     &&
  echo  y  |  ./setup.py              &&
  mv  /usr/local/bin/tuxmathscrabble  \
      /usr/games                      &&
  sedit  's:/usr/local:/usr:'         \
     /usr/games/tuxmathscrabble

)  >  ${C_FIFO}  2>&1
