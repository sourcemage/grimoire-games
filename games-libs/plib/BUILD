# this fixes (again) the problem with NVIDIA GL libs
sedit 's:LIBS="-lGL  $LIBS":LIBS="-lGL  $LIBS -lgcc_s":' configure  &&
OPTS="$OPTS --with-GL=/usr/X11R6"                                   &&
default_build

