(
  cd $SOURCE_DIRECTORY  &&
  sedit "s/OPTFLAGS=-O3 -fomit-frame-pointer -funroll-loops/OPTFLAGS=${CFLAGS}/" Makefile &&
  sedit "s:extern int dprintf.://extern int dprintf:" mast/mast.h &&
  make all &&
  prepare_install &&
  cp dega ${INSTALL_ROOT}/usr/games
) > $C_FIFO 2>&1
