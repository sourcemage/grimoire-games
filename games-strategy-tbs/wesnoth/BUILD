OPTS="-DBINDIR=$INSTALL_ROOT/usr/games \
      -DENABLE_STRICT_COMPILATION=FALSE \
      $WESNOTH_OPTS" &&

CFLAGS="`pkg-config --cflags glib-2.0` $CFLAGS" &&
LDFLAGS="-lpthread $LDFLAGS" &&

cmake_build
