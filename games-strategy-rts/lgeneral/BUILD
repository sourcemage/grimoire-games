# This is a bit ugly, but works until upstream is
# fixed or patched.
#  --bindir=${INSTALL_ROOT}/usr/games \ # This breaks the package
OPTS=" \
  --prefix=${INSTALL_ROOT}/usr \
  --datadir=${INSTALL_ROOT}/usr/share \
  --localstatedir=${INSTALL_ROOT}/var/games \
  $OPTS" &&
default_build
# default_games_build fails terribly.  Don't use it!
