(
  patch  -p1  <  $SCRIPT_DIRECTORY/xrally-1.1.1.patch  &&
  sedit  's/VERSION=1.1/VERSION=1.1.1/g'  configure  &&
  sedit  "s/-O3 -g3 -Wall/$CFLAGS/"  configure  && 
  sedit  's/x##/x/'  soundplayer.h  &&
  sedit  's/" __PRETTY_FUNCTION__ "/%s/'  global.h  &&
  sedit  's/__LINE__/__PRETTY_FUNCTION__, &/'  global.h  &&

  ./configure  --build=$BUILD        \
               --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
