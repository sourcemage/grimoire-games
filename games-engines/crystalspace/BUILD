(
  ./configure  --prefix=${INSTALL_ROOT}/usr/share/crystalspace  \
               --exec-prefix=${INSTALL_ROOT}/usr/               \
               --sysconfdir=${INSTALL_ROOT}/etc                 \
               --localstatedir=${INSTALL_ROOT}/var              \
               ${OPTS}                                          &&
  jam								&&
  jam install

#  sedit "s/^CFLAGS.SYSTEM += -mcpu=.*$/CFLAGS.SYSTEM += $CFLAGS/" config.mak &&
#  make all                                                      &&
#  prepare_install                                               &&
#  ./scfreg *.so                                                 &&
#  make install                                                  &&
#  mkdir -p ${INSTALL_ROOT}/usr/games                            &&
#  ln -sf ${INSTALL_ROOT}/usr/share/crystalspace/bin/* ${INSTALL_ROOT}/usr/games/ 

) > $C_FIFO 2>&1
