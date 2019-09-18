case "$HOST" in
*-musl) CXXFLAGS+=' -DBX_CRT_MUSL=1' ;;
esac &&

# Avoid non-fatal errors
OPTS+=' NOWERROR=1' &&

QTDIR="$INSTALL_ROOT/opt/qt5" &&
CPATH="$QTDIR/include" \
PATH="$QTDIR/bin:$PATH" \
make $OPTS
