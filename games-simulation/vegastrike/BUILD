cd ${SPELL}   &&
aclocal       &&
autoconf      &&
autoheader    &&
automake  -a  &&

./configure  --prefix=${INSTALL_ROOT}/usr                              \
             --sysconfdir=${INSTALL_ROOT}/etc                          \
             --localstatedir=${INSTALL_ROOT}/var                       \
             --mandir=${INSTALL_ROOT}/usr/share/man                    \
             --infodir=${INSTALL_ROOT}/usr/share/info                  \
             --datadir=${INSTALL_ROOT}/usr/share/games/vegastrike/data \
             --bindir=${INSTALL_ROOT}/usr/games                        \
             --enable-release                                          \
             $OPTS                                                    &&

make              &&
cd ../vssetup/src &&
perl ./build      &&
cd ../../
