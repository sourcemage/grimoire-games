(

  cd  src                                                &&
  sedit  "s:CFLAGS=:CFLAGS=${CFLAGS} :"  Makefile        &&
  sedit  's:/bin:/games:'  Makefile                      &&
  sedit  's:/lib:/share/games:'  Makefile                &&
  sedit  's:/share:/share:'  Makefile                    &&

  make             &&
  prepare_install  &&
  make  install

)  >  $C_FIFO  2>&1
