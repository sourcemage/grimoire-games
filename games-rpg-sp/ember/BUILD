if  [  "$EMBER_CVS"  ==  "y"  ];  then
  make_single   &&
  ./autogen.sh
fi  &&

OPTS="         $OPTS                           \
      --bindir=$INSTALL_ROOT/usr/games         \
     --datadir=$INSTALL_ROOT/usr/share/games"  &&

default_build  &&
make_normal
