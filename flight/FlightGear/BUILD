patch  -p0  src/FDM/ExternalNet/ExternalNet.hxx  \
       <    ${SCRIPT_DIRECTORY}/plib.patch       &&

./configure  --prefix=${INSTALL_ROOT}/usr               \
             --bindir=${INSTALL_ROOT}/usr/games         \
             --datadir=${INSTALL_ROOT}/usr/share/games  \
             --libdir=${INSTALL_ROOT}/usr/share/games   \
             --mandir=${INSTALL_ROOT}/usr/share/man     \
             ${OPTS}                     &&
make
