(
I_DIR="${INSTALL_ROOT}/usr/share/games/$SPELL" 
#unpack the setup package before we track files
  gunzip -dc setupstuff.tar.gz | tar xvf - 				&&
  prepare_install 	                				&&
#fake install
 mkdir -p $I_DIR 							&&
 install -m0444 ArmyOps.xpm $I_DIR       				&&
 install -m0755 bin/armyops $I_DIR       				&&
 install -m0444 README.linux $I_DIR 					&&
#change to install directory for unpack as tmpfs will be too small 
 cd $I_DIR								&&
 bunzip2 -dc $SOURCE_DIRECTORY/armyops170data.tar.bz2 | tar xvf - 	&&
 bunzip2 -dc $SOURCE_DIRECTORY/armyops170System.tar.bz2 | tar xvf - 	&&
 ln -sf $PWD/armyops ${INSTALL_ROOT}/usr/games/ 			&&
 install -m0444 $SCRIPT_DIRECTORY/armyops.kdelnk ${INSTALL_ROOT}/usr/share/applnk/Games/
)  >  ${C_FIFO}  2>&1
