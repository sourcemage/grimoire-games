(
#tarball depcomp is truncated somehow?
#taken from previous release?
cp $SCRIPT_DIRECTORY/depcomp .
  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
	       --datadir=${INSTALL_ROOT}/usr/share/games \
               ${OPTS}               &&
  make                               &&
  prepare_install                    &&
  make    install

) > ${C_FIFO} 2>&1
