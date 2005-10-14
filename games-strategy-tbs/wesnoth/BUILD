if [ "$WESNOTH_STATIC" == "y" ]; then
   OPTS="$OPTS --enable-static"
fi                                       &&

if [ "$WESNOTH_LITE" == "y" ]; then
   OPTS="$OPTS --enable-lite"
fi                                       &&

if [ "$WESNOTH_SERVER" == "y" ]; then
   OPTS="$OPTS --enable-server"
fi                                       &&

if [ "$WESNOTH_CAMPAIGN" == "y" ]; then
   OPTS="$OPTS --enable-campaign-server"
fi                                       &&

if [ "$WESNOTH_EDITOR" == "y" ]; then
   OPTS="$OPTS --enable-editor"
fi                                       &&

if [ "$WESNOTH_TOOLS" == "y" ]; then
   OPTS="$OPTS --enable-tools"
fi                                       &&

default_games_build
