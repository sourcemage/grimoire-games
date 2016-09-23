OPTS+=" CONFIG+=no-update CONFIG+=no-embed-qt-transaltions CONFIG+=no-g15"

if [[ "$MUMBLE_SERVER" == 'n' ]]; then
    OPTS="$OPTS CONFIG+=no-server"
fi

if [[ "$MUMBLE_CLIENT" == 'n' ]]; then
    OPTS="$OPTS CONFIG+=no-client"
fi

if [[ "$MUMBLE_OVERLAY" == 'n' ]]; then
    OPTS="$OPTS CONFIG+=no-overlay"
fi

PATH=/usr/bin/qt4:$PATH &&
qmake main.pro $OPTS \
      QMAKE_CFLAGS="$CFLAGS" \
      QMAKE_CXXFLAGS="$CXXFLAGS" \
      QMAKE_CXXFLAGS+=-DCELT_SET_VBR_RATE=CELT_SET_BITRATE &&
# XXX -DCELT_SET_VBR_RATE=... is needed to compile against celt 0.11
make_single &&
make &&
make_normal
