(

  ./configure --prefix=${INSTALL_ROOT}/usr             \
          --sysconfdir=${INSTALL_ROOT}/etc             \
       --localstatedir=${INSTALL_ROOT}/var             \
              --mandir=${INSTALL_ROOT}/usr/share/man   \
             --infodir=${INSTALL_ROOT}/usr/share/info  \
                       $OPTS                           &&
  make                                                 &&
  prepare_install                                      &&
  make    install                                      &&
  cp  ${SCRIPT_DIRECTORY}/wfmath-0.2.pc                \
  /usr/lib/pkgconfig/

) > $C_FIFO 2>&1
