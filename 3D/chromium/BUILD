//sgl/games/grimoire/3D/chromium/BUILD#3 - edit change 38222 (xtext)
(
  export  OLDCFLAGS=${CFLAGS} &&
  export  OLDCXXFLAGS=${CXXFLAGS} &&
  patch -p1 < $SCRIPT_DIRECTORY/chromium.patch &&
  make                               &&
  prepare_install                    &&
  mkdir -p ${INSTALL_ROOT}/usr/games &&
 cd ${INSTALL_ROOT}/usr/share/games &&
 unpack ${SOURCE2} ${MD5[1]}  &&
 mkdir -p Chromium-0.9/bin    &&
 cd $SOURCE_DIRECTORY  &&
 install -m755 bin/chromium ${INSTALL_ROOT}/usr/games/
)  >  ${C_FIFO}  2>&1
