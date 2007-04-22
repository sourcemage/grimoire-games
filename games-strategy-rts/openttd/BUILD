OPTS="--with-iconv $OPTS"                                              &&
./configure $OPTS                                                      &&
sedit '30s;PREFIX:=;PREFIX:=${INSTALL_ROOT}/usr;' Makefile.config      &&
sedit '31s;BINARY_DIR:=;BINARY_DIR:=games;' Makefile.config            &&
sedit '32s;DATA_DIR:=;DATA_DIR:=share/games/openttd;' Makefile.config  &&
sedit '33s;ICON_DIR:=;ICON_DIR:=share/pixmaps;' Makefile.config        &&
sedit '34s;USE_HOMEDIR:=;USE_HOMEDIR:=1;' Makefile.config              &&
sedit '35s;PERSONAL_DIR:=;PERSONAL_DIR:=.openttd;' Makefile.config     &&
make
