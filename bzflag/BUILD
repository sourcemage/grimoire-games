(

  make  linux                                &&
  make  all                                  &&
  prepare_install                            &&
  cp    bin/*     /usr/games                 &&
  mkdirhier       /usr/X11R6/lib/X11/bzflag  &&
  cp    -r  data  /usr/X11R6/lib/X11/bzflag

) > $C_FIFO 2>&1
