(

  ./configure  --prefix=/usr                    \
               --bindir=/usr/games              \
               --infodir=/usr/share/info        \
               --mandir=/usr/share/man          \
               --sharedstatedir=/var/games      \
               --with-setgid=games              \
               $OPTS                &&
  make                              &&
  prepare_install                   &&
  make    install

) > $C_FIFO 2>&1
