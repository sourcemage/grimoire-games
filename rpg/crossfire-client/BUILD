 sedit  "s:local/lib:share/crossfire:"  sound-src/sounds.dist
 cp gtk/gx11.c gtk/gx11.old &&
 cat gtk/gx11.old  | sed -f $SCRIPT_DIRECTORY/include  > gtk/gx11.c &&
  ./configure  --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --disable-alsa        \
               --with-sound-dir=${INSTALL_ROOT}/usr/share/crossfire/sounds  \
               $OPTS                 &&
  make depend       &&
  make
