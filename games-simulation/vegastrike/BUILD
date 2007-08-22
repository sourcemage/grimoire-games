if [[ $VEGASTRIKE_DEVEL == "y" ]]; then
cd ${SPELL}-svn
else
cd ${SPELL}-${VERSION}
fi
if [[ $VEGASTRIKE_DEBUG == "n" ]]; then
OPTS="--enable-release --disable-debug $OPTS"
else
OPTS="--disable-release --enable-debug $OPTS"
fi
OPTS="$VS_OPTS --datadir=${INSTALL_ROOT}/usr/share/games/vegastrike/data$VERSION2 $OPTS"
default_games_build &&
make vssetup
