(

  patch  -p1  <  ${SCRIPT_DIRECTORY}/qt.patch        &&
  patch  -p1  <  ${SCRIPT_DIRECTORY}/path.patch      &&
  export QTDIR=/usr                                  &&
  
  ./configure                                        &&
  patch  -p1  <  ${SCRIPT_DIRECTORY}/Makefile.patch  &&
  make                                               &&
  prepare_install                                    &&
  cp kaf /usr/games
 
) > $C_FIFO 2>&1
