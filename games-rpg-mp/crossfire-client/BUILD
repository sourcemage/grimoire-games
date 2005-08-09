invoke_gcc &&

sedit  "s:local/lib:share/crossfire:"  sound-src/sounds.dist             &&
cp  gtk/gx11.c  gtk/gx11.old                                             &&
cat  gtk/gx11.old  |  sed  -f  $SCRIPT_DIRECTORY/include  >  gtk/gx11.c  &&

./configure  --prefix=${INSTALL_ROOT}/usr                               \
             --bindir=${INSTALL_ROOT}/usr/games                         \
            --datadir=${INSTALL_ROOT}/usr/share/games                   \
         --sysconfdir=${INSTALL_ROOT}/etc                               \
      --localstatedir=${INSTALL_ROOT}/var                               \
     --with-sound-dir=${INSTALL_ROOT}/usr/share/games/crossfire/sounds  \
               $OPTS                                                    &&
make  depend  &&
make 
