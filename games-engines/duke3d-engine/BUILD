(

DATA=${INSTALL_ROOT}/usr/share/games/duke3d &&

cd $SOURCE_DIRECTORY/source/buildengine &&
make &&
cd $SOURCE_DIRECTORY/source &&
make &&
strip duke3d &&

prepare_install &&

mkdir -p $DATA &&
mkdir -p ${INSTALL_ROOT}/usr/games &&
cp -f $SPELL_DIRECTORY/duke3d ${INSTALL_ROOT}/usr/games
cp $SOURCE_DIRECTORY/source/duke3d $DATA &&
cp $SOURCE_DIRECTORY/testdata/defs.con $DATA/DEFS.CON &&
cp $SOURCE_DIRECTORY/testdata/game.con $DATA/GAME.CON &&
cp $SOURCE_DIRECTORY/testdata/user.con $DATA/USER.CON &&
cp $SPELL_DIRECTORY/duke3d.cfg $DATA

) > $C_FIFO 2>&1
