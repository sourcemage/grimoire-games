(

  make  linux                                &&
  make  all                                  &&
  prepare_install                            &&
  install  --directory  /usr/games  /usr/share/man/man6  &&	# not automatic
  cp    bin/*     /usr/games                 &&
  cp	man/*.6	  /usr/share/man/man6	     &&
  mkdirhier       /usr/X11R6/lib/X11/bzflag  &&
  cp    -r  data  /usr/X11R6/lib/X11/bzflag

) > $C_FIFO 2>&1
