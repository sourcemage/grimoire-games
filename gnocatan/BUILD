(

  sedit "s:--no-same-owner::" client/Makefile.in

  ./configure  --build=$BUILD			\
               --prefix=${INSTALL_ROOT}/usr			\
               --bindir=${INSTALL_ROOT}/usr/games		\
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
