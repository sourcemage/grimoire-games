if  [  "$TEG_SERVER"  =  "n"  ];  then
  OPTS="${OPTS}  --disable-server"
fi  &&

if  [  "$TEG_ROBOT"  =  "n"  ];  then
  OPTS="${OPTS}  --disable-robot"
fi  &&

./configure  --build=$BUILD                     \
            --prefix=${INSTALL_ROOT}/usr        \
            --bindir=${INSTALL_ROOT}/usr/games  \
        --sysconfdir=${INSTALL_ROOT}/etc        \
     --localstatedir=${INSTALL_ROOT}/var        \
                     $OPTS                      &&
make
