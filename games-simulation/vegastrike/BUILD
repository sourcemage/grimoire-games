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
if [[ $VEGASTRIKE_STENCILBUFFER == "y" ]]; then
OPTS="--enable-stencil-buffer $OPTS"
else
OPTS="--disable-stencil-buffer $OPTS"
fi
OPTS="--datadir=/usr/share/games/vegastrike/data$VEGASTRIKE_DATAVERSION $OPTS"
default_games_build &&
make vssetup
