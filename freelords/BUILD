(

  I_DIR="/usr/share/games/${SPELL}"
 
  ./configure  --build=${BUILD}            \
               --prefix=/usr/share         \
               --sysconfdir=/etc           \
               --localstatedir=/var        \
               --disable-paraguitest       \
               CPPFLAGS=${CPPFLAGS}        \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  mkdir  -p      ${I_DIR}/bin              &&
  cp  -aRp  pic  ${I_DIR}                  &&
  cd  src                                  &&
  cp  fl         ${I_DIR}/bin              &&
  cp  freelords  ${I_DIR}/bin              &&
  cp  genmap.py  ${I_DIR}                  &&
  cp  -aRp  ai  ${I_DIR}                   &&
  cp  -aRp  server/*.so.0.1.0  /usr/lib    &&
  ln  -sf  /usr/lib/libflserver.so.0.1.0   \
    /usr/lib/libflserver.so                &&
  cp  -aRp  common/*.so.0.1.0  /usr/lib    &&
  ln  -sf  /usr/lib/libflcommon.so.0.1.0   \
    /usr/lib/libflcommon.so                &&
  cp  -aRp  graphic/*.so.0.1.0  /usr/lib   &&
  ln  -sf  /usr/lib/libflgraphic.so.0.1.0  \
    /usr/lib/libflgraphic.so               &&
  cp  ${SCRIPT_DIRECTORY}/freelords        \
    /usr/games                             &&
  chown  -R  root.games  ${I_DIR}          &&
  chown  root.games  /usr/games/freelords  &&
  chmod  +x  /usr/games/freelords          &&
  cp  freelordsrc  /etc                    &&
  chown  root.games  /etc/freelordsrc      &&
  chmod 664  /etc/freelordsrc

)  >  ${C_FIFO}  2>&1
