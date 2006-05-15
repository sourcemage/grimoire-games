./configure             $OPTS                                                                &&
sedit  "s:prefix\s*=\s*/usr/local:prefix=${INSTALL_ROOT}/usr:"                                    Makefile  &&
sedit  "s:bindir\s*=\s*/usr/local/bin:bindir=${INSTALL_ROOT}/usr/games:"                          Makefile  &&
sedit  "s:mandir\s*=\s*/usr/local/man:mandir=${INSTALL_ROOT}/usr/share/man:"                      Makefile  &&
sedit  "s:datadir\s*=\s*/usr/local/share/eboard:datadir=${INSTALL_ROOT}/usr/share/games/eboard:"  Makefile  &&
make
