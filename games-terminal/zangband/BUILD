(

  I_DIR=${INSTALL_ROOT}/usr/share/games/${SPELL}                        &&
  ./bootstrap                                            &&
  ./configure  --build=${BUILD}                          \
               --prefix=${INSTALL_ROOT}/usr/games                       \
               --sysconfdir=${INSTALL_ROOT}/etc                         \
               --localstatedir=${INSTALL_ROOT}/var                      \
               CYGWIN_TRUE=1                             \
               CYGWIN_FALSE=0                            \
               CYGWIN=no                                 \
               CFLAGS="${CFLAGS}"                        \
               LDFLAGS="${LDFLAGS}"                      \
               ${OPTS}                                   &&
  make                                                   &&
  prepare_install                                        &&
  mkdir  -p ${INSTALL_ROOT}/usr/games                    &&
  mkdir  -p -m0777  ${I_DIR}                             &&
  cp  zangband  ${I_DIR}                                 &&
  cp  -r  lib  ${I_DIR}                                  &&
  cp  ${SCRIPT_DIRECTORY}/zangband  /usr/games           &&
  chmod  775  /usr/games/zangband                        &&
  chown  root.games  /usr/games/zangband                 &&
  chown  root.games  ${I_DIR}  -R                        &&
  chmod -R a+rw ${I_DIR}

) > ${C_FIFO} 2>&1
