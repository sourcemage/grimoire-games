(

  sedit  's:\# TF="/usr/local:TF="/usr:'             unix/Config  &&
  sedit  's:\# LIBDIR="/usr/local:LIBDIR="/usr:'     unix/Config  &&
  sedit  's:\# SYMLINK="/usr/local:SYMLINK="/usr:'   unix/Config  &&
  sedit  's:\# MANPAGE="/usr/local:MANPAGE="/usr:'   unix/Config  &&
  sedit  "s:\# CCFLAGS=\"-g\":CCFLAGS=\"$CFLAGS\":"  unix/Config  &&
  chmod +x unix/Config       &&
  echo y | ./unixmake files  &&
  prepare_install            &&
  ./unixmake install

) > $C_FIFO 2>&1
