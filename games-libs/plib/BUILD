(

  # this fixes (again) the problem with NVIDIA GL libs
  sedit 's:LIBS="-lGL  $LIBS":LIBS="-lGL  $LIBS -lgcc_s":' configure  &&
  if ! [ -h ${INSTALL_ROOT}/usr/X11R6/lib/libXi.so ]
  then sedit "s/-lXi//" configure
  fi   &&
  default_build

) > $C_FIFO 2>&1
