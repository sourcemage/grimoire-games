#
# This is ugly, but Python uses space delimitation
#
sedit  '/^import pysolsoundserver/s/.*/try:\
	import pysolsoundserver\
except ImportError:\
	pysolsoundserver = None/'  src/pysolaudio.py  &&

if  [  -d  pysol-sound-server-${SOUNDVER}  ];  then
  cd  pysol-sound-server-${SOUNDVER}/src                 &&
  cp  ${SCRIPT_DIRECTORY}/Makefile.sound  Makefile       &&
  ./configure  --prefix=${INSTALL_ROOT}/usr              \
               --bindir=${INSTALL_ROOT}/usr/games        \
              --datadir=${INSTALL_ROOT}/usr/share/games  \
           --sysconfdir=${INSTALL_ROOT}/etc              \
        --localstatedir=${INSTALL_ROOT}/var              \
              $OPTS                                      &&

  make                                                   &&
  make  test                                             &&
  cd    ../..
fi
