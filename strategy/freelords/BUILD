(

  autoconf                                              &&
  
  ./configure  --build=${BUILD}                         \
              --prefix=${INSTALL_ROOT}/usr              \
              --bindir=/usr/games                       \
             --datadir=${INSTALL_ROOT}/usr/share/games  \
          --sysconfdir=${INSTALL_ROOT}/etc              \
       --localstatedir=${INSTALL_ROOT}/var              \
              CPPFLAGS=${CPPFLAGS}                      \
                       ${OPTS}                          &&
  make                                                  &&
  prepare_install                                       &&
  make  install                                         &&

  #install config file globally
  cp  ${SCRIPT_DIRECTORY}/freelordsrc  /etc             &&
  chown  root.games  /etc/freelordsrc                   &&
  chmod 664  /etc/freelordsrc

)  >  ${C_FIFO}  2>&1
