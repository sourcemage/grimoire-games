(

  cd  src                                                &&
  sedit  "s:CFLAGS=:CFLAGS=${CFLAGS} :"  Makefile        &&
  sedit  's:/usr/bin:/usr/games:'  Makefile              &&
#  sedit  's:libdir)/u4/:libdir)/u4/ultima4/:'  Makefile  &&

  make             &&
  prepare_install  &&
  make  install

)  >  $C_FIFO  2>&1
