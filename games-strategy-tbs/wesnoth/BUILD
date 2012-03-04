WESNOTH_PATHS="prefix=$INSTALL_ROOT/usr \
               bindir=$INSTALL_ROOT/usr/games \
               datadir=$INSTALL_ROOT/usr/share/games/$SPELL \
               icondir=$INSTALL_ROOT/usr/share/games/icons \
               desktopdir=$INSTALL_ROOT/usr/share/applications \
               build_dir=wesnoth-build"  &&

WESNOTH_OPTS="jobs=${MAKE_NJOBS} verbose=yes"  && 

scons $WESNOTH_BUILD $WESNOTH_PATHS $WESNOTH_OPTS $OPTS
