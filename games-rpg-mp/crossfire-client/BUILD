sedit  "s:local/lib:share/crossfire:"  sound-src/sounds.dist             &&
cp  gtk/gx11.c  gtk/gx11.old                                             &&
cat  gtk/gx11.old  |  sed  -f  $SCRIPT_DIRECTORY/include  >  gtk/gx11.c  &&

OPTS="--with-sound-dir=${INSTALL_ROOT}/usr/share/games/crossfire/sounds  \
      $OPTS"                                                             &&
default_games_build
