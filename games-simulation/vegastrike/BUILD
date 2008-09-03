#if [[ $VEGASTRIKE_DEVEL == "y" ]]; then
#cd ${SPELL}-svn
#else
#cd ${SPELL}-${VERSION}
#fi
#OPTS="$VS_OPTS --datadir=/usr/share/games/vegastrike/data${VERSION2} $OPTS"
if [[ $VEGASTRIKE_DEBUG == "n" ]]; then
  OPTS="--enable-release --disable-debug $OPTS"
else
  OPTS="--disable-release --enable-debug $OPTS"
fi
OPTS="$VS_OPTS --datadir=${INSTALL_ROOT}/usr/share/games/vegastrike/$VERSION $OPTS"
default_games_build
