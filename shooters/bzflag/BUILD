OPTS="$BZFLAG_THREADS   \
      $BZFLAG_ADMIN     \
      $BZFLAG_CLIENT    \
      $BZFLAG_ROBOTS    \
      $BZFLAG_SNAPPING  \
      $BZFLAG_CURL      \
      $OPTS"            &&

OPTS="--datadir=${INSTALL_ROOT}/usr/share/games  \
       --bindir=${INSTALL_ROOT}/usr/games        \
                $OPTS"                           &&

./autogen.sh  &&

default_build
