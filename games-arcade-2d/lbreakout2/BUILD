  # works around a bug in gcc 3.2
  CFLAGS=`echo ${CFLAGS} |sed s:"-O.::"`

  ./configure  --build=${BUILD}                                 \
               --prefix=${INSTALL_ROOT}/usr                     \
               --sysconfdir=${INSTALL_ROOT}/etc                 \
               --localstatedir=${INSTALL_ROOT}/var              \
               --bindir=${INSTALL_ROOT}/usr/games               \
               --with-highscore-path=${INSTALL_ROOT}/var/games  \
               --mandir=${INSTALL_ROOT}/usr/share/man           \
               --infodir=${INSTALL_ROOT}/usr/share/info $OPTS   &&
  make

