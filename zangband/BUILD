(

  I_DIR=/usr/share/games/${SPELL}                        &&
  ./bootstrap                                            &&
  ./configure  --build=${BUILD}                          \
               --prefix=/usr/games                       \
               --sysconfdir=/etc                         \
               --localstatedir=/var                      \
               CYGWIN_TRUE=1                             \
               CYGWIN_FALSE=0                            \
               CYGWIN=no                                 \
               CFLAGS="${CFLAGS}"                        \
               LDFLAGS="${LDFLAGS}"                      \
               ${OPTS}                                   &&
  make                                                   &&
  prepare_install                                        &&
  mkdir  -p   ${I_DIR}                                   &&
  cp  zangband  ${I_DIR}                                 &&
  cp  -r  lib  ${I_DIR}                                  &&
  cp  ${SCRIPT_DIRECTORY}/zangband  /usr/games           &&
  chmod  775  /usr/games/zangband                        &&
  chown  root.games  /usr/games/zangband                 &&
  chown  root.games  ${I_DIR}  -R

) > ${C_FIFO} 2>&1
