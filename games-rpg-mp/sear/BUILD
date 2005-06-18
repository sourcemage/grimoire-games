if  [  "$SEAR_CVS"  ==  "y"  ];  then
  make_single   &&
  ./autogen.sh
fi  &&

OPTS="          $OPTS                             \
       --bindir=${INSTALL_ROOT}/usr/games         \
      --datadir=${INSTALL_ROOT}/usr/share/games"  &&

LDFLAGS="${LDFLAGS} -L/usr/X11R6/lib"  default_build  &&
make_normal
