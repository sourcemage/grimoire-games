(

  ./configure  --prefix=${INSTALL_ROOT}/usr                    \
               --bindir=${INSTALL_ROOT}/usr/games              \
               --infodir=${INSTALL_ROOT}/usr/share/info        \
               --mandir=${INSTALL_ROOT}/usr/share/man          \
               --sharedstatedir=${INSTALL_ROOT}/var/games      \
               --with-setgid=games              \
               $OPTS                &&
  make                              &&
  prepare_install                   &&
  make    install

) > $C_FIFO 2>&1
