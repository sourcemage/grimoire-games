(
I_DIR="${INSTALL_ROOT}/usr/share/games/enemy-territory" 
  prepare_install 	                &&
#fake install
mkdir -p $I_DIR 			&&
cp -r Docs $I_DIR 			&&
cp -r etmain $I_DIR 			&&
cp -r pb $I_DIR 			&&
chown -R root.games $I_DIR		&&
chmod -R a+rw $I_DIR 			&&
install -m0644 CHANGES $I_DIR 			&&
install -m755 bin/Linux/x86/*.x86 $I_DIR &&
install openurl.sh $I_DIR 		&&
install -m0644 ET.xpm $I_DIR     		&&
install -m0644 Docs/EULA_Wolfenstein_Enemy_Territory.txt $I_DIR &&
echo -e "#!/bin/sh \n
# Needed to make symlinks/shortcuts work. \n
# the binaries must run with correct working directory \n
cd "${I_DIR}" \n ./et.x86 \$* \n exit \$?" > et &&
echo -e "#!/bin/sh \n
# Needed to make symlinks/shortcuts work. \n
# the binaries must run with correct working directory \n
cd "${I_DIR}" \n ./etded.x86 \$* \n exit \$?" > etded &&
install et ${INSTALL_ROOT}/usr/games &&
install etded ${INSTALL_ROOT}/usr/games &&
mkdir -p ${INSTALL_ROOT}/usr/share/applnk/Games/ &&
install -m0644 $SCRIPT_DIRECTORY/et.kdelnk ${INSTALL_ROOT}/usr/share/applnk/Games/ 
)  >  ${C_FIFO}  2>&1
