(

  # this fixes (again) the problem with NVIDIA GL libs
  sedit 's:LIBS="-lGL  $LIBS":LIBS="-lGL  $LIBS -lgcc_s":' configure

  default_build

) > $C_FIFO 2>&1
