(
cd ./criticalmass  &&
 ./autogen.sh							 &&
  
 ./configure  --prefix=${INSTALL_ROOT}/usr        \
              --bindir=${INSTALL_ROOT}/usr/games  \
             $OPTS                &&
  make                            &&
  prepare_install                 &&
  make    install

) > $C_FIFO 2>&1
