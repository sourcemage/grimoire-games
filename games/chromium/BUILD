(
  export  OLDCFLAGS=${CFLAGS} &&
  export  OLDCXXFLAGS=${CXXFLAGS} &&
  patch -p1 < $SCRIPT_DIRECTORY/chromium.patch &&
  make                               &&
  prepare_install                    &&
 cd ${INSTALL_ROOT}/usr/share/games &&
 unpack ${SOURCE2} ${MD5[1]}  &&
 mkdir -p Chromium-0.9/bin    &&
 cd $SOURCE_DIRECTORY  &&
 install -m755 bin/chromium ${INSTALL_ROOT}/usr/share/games/Chromium-0.9/bin &&
 echo -e "#! /bin/bash \n cd ${INSTALL_ROOT}/usr/share/games/Chromium-0.9/bin && \n if \$( ps ax |grep -q arts ) ; then exec artsdsp ./chromium \$* ; else exec ./chromium \$* ; fi" > chromium  &&
 install -m0755 chromium /usr/games/
)  >  ${C_FIFO}  2>&1
