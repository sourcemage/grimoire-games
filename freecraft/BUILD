(
  FREE_DIR="/usr/share/games/freecraft"

  ./setup                          &&
  make                             &&
  prepare_install                  &&
  mkdir  -p  $FREE_DIR             &&
  cp  -vfrpa  data  $FREE_DIR      &&
  cp  -vfpa  freecraft  $FREE_DIR  &&
  cp  -vfpa  $SCRIPT_DIRECTORY/freecraft  /usr/games

) 2> $C_FIFO
