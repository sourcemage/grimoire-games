(

DATA="${INSTALL_ROOT}/usr/share/games/HoH"

prepare_install                         &&
cp -f $SPELL_DIRECTORY/hoh ${INSTALL_ROOT}/usr/games		&&
chmod +x ${INSTALL_ROOT}/usr/games &> /dev/null          &&
mkdir -p $DATA                          &&
cp -rf ./data/* $DATA/

)  >  ${C_FIFO}  2>&1
