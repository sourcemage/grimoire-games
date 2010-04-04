OPTS="$OPTS CONFIG+=no-update CONFIG+=no-embed-qt-transaltions CONFIG+=no-g15 CONFIG+=no-bundled-speex"

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
qmake main.pro $OPTS &&
make
