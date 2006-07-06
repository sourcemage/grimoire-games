if [[ "$EXULT_VER" == "stable" ]] ; then
  OPTS="$OPTS --disable-exult-studio-support"  &&
  default_games_build
else
  ./autogen.sh                                 &&
  OPTS="$OPTS --disable-exult-studio-support"  &&
  default_games_build
fi
