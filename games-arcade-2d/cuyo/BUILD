  sedit 's:include/qglobal.h:include/qt/qglobal.h:' configure  &&
  sedit 's:I$QTDIR/include:I$QTDIR/include/qt:' configure	&&
  ./configure  --build=${BUILD}            \
               --with-qt                   \
               --with-x                    \
               --prefix=${INSTALL_ROOT}/usr/              \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               --sysconfdir=${INSTALL_ROOT}/etc           \
               --localstatedir=${INSTALL_ROOT}/var/games  \
               ${OPTS}
