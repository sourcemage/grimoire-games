OPTS="${OPTS}  --bindir=${INSTALL_ROOT}/usr/games"  &&
export LIBS='-L /usr/X11R6/lib/'                    &&
#build fails at -O3
CFLAGS=${CFLAGS//-O3/}                              &&
default_build

