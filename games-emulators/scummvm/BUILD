local SCUMMVM_OPTS_TMP="$SCUMMVM_OPTS"                     &&
list_remove SCUMMVM_OPTS_TMP "--enable-scumm"              \
            "--enable-he" "--enable-hq-scalers"            \
            "--enable-mt32emu" "--enable-gob"              \
            "--enable-saga" "--enable-queen"               \
            "--enable-sword2" "--enable-sword1"            \
            "--enable-sky" "--enable-simon"                \
            "--enable-scumm-7-8" "--enable-kyra"           &&
OPTS="$SCUMMVM_OPTS_TMP --backend=$SCUMMVM_BACKEND $OPTS"  &&
./configure --bindir=$INSTALL_ROOT/usr/games               \
            --mandir=$INSTALL_ROOT/usr/share/man           \
            --prefix=$INSTALL_ROOT/usr                     \
            $OPTS                                          &&
make
