(

  sedit  "s:local/lib:share/crossfire:"  sound-src/sounds.dist
 cp gtk/gx11.c gtk/gx11.old &&
 cat gtk/gx11.old  | sed -f $SCRIPT_DIRECTORY/include  > gtk/gx11.c &&

  ./configure  --prefix=/usr         \
               --bindir=/usr/games   \
               --sysconfdir=/etc     \
               --localstatedir=/var  \
               --disable-alsa        \
               --with-sound-dir=/usr/share/crossfire/sounds  \
               $OPTS                 &&
  make depend
  make                               &&
  prepare_install                    &&
  make    install                    &&
  mkdir   -p  /usr/share/crossfire   &&
  cd          /usr/share/crossfire   &&
  unpack  ${SOURCE2}  ${MD5[1]}      &&
  unpack  ${SOURCE3}  ${MD5[2]}      &&
  chown   -R  root:root  /usr/share/crossfire/sounds

) > $C_FIFO 2>&1
