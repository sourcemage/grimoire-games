(

  # Add missing file from tarball...
  cp  ${SCRIPT_DIRECTORY}/uiuc_getwind.h  src/FDM/LaRCsim  &&

  ./configure  --prefix=/usr           \
               --bindir=/usr/games     \
               --mandir=/usr/share/man &&
  make                                 &&
  prepare_install                      &&
  make    install

) > $C_FIFO 2>&1
