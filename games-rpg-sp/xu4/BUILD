(
  cd  src                                                &&
  sedit  "s:CFLAGS=:CFLAGS=${CFLAGS} :"  Makefile        &&
  sedit  's:/usr/local:/usr/:'  Makefile                 &&
  sedit  's:/bin:/games:'  Makefile                      &&
  sedit  's:/lib:/share/games:'  Makefile                &&
  sedit  "s/-lpng/-lpng -lm/g"  Makefile.common          &&
  sedit  "s/\/usr\/local\/lib/\/usr\/share\/games/g" u4file.c &&
  make             &&
  prepare_install  &&
  make  install    
cd ${INSTALL_ROOT}/usr/share/games/u4               	 &&
  unpack_file 2                  	 &&
  ln  -sf  ULTIMA4  ultima4                              &&
  ln  -sf  MOSLO    moslo

)  >  $C_FIFO  2>&1
