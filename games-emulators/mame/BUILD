case "$HOST" in
*-musl) CXXFLAGS+=' -DBX_CRT_MUSL=1' ;;
esac &&

# Avoid non-fatal errors
OPTS+=' NOWERROR=1' &&

make -j "$MAKE_NJOBS" $OPTS
