(

echo -e "1 \n 1 \n 4 \n 1 \n ${INSTALL_ROOT}/usr/share/games/ \n 2 \n ${INSTALL_ROOT}/usr/games/ \
\n 3 \n ${INSTALL_ROOT}/usr/share/games/ \n" | ./build.sh  uqm  config            &&
  ./build.sh  uqm  depend                 &&
  ./build.sh  uqm                         &&
  prepare_install                         &&
  ./build.sh uqm install                  &&
  ln  -sfn  /usr/games/uqm /usr/games/sc2

)  >  ${C_FIFO}  2>&1
