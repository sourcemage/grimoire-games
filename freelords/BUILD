(

  I_DIR="/usr/share/games/${SPELL}"

  cd  src                                       &&
  #  Patch bugs in freelords source code
  #  No longer needed since v20020827
#  sedit  's/-Werror/-Wno-deprecated/'                     Makefile           &&
#  sedit  's/-Werror/-Wno-deprecated/'                     common/Makefile    &&
#  sedit  's/-Werror/-Wno-deprecated/'                     graphics/Makefile  &&
#  bzcat  $SCRIPT_DIRECTORY/temple.h.diff.bz2              |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/armyset_army.cpp.diff.bz2      |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/mapset_tile.cpp.diff.bz2       |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/army.cpp.diff.bz2              |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/armysetlist.cpp.diff.bz2       |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/action.cpp.diff.bz2            |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/RuinSearchDialog.cpp.diff.bz2  |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/cityinfo.h.diff.bz2            |  patch  -p0      &&
#  bzcat  $SCRIPT_DIRECTORY/main.cpp.diff.bz2              |  patch  -p0      &&

  make                                                          &&
  prepare_install                                               &&
  rm  -rf  common/CVS  graphic/CVS                              &&
  install  -d  755  -g  games  ${I_DIR}                         &&
  install  -d  755  -g  games  ${I_DIR}/common                  &&
  install  -d  755  -g  games  ${I_DIR}/graphic                 &&
  install  -m  755  -g  games  fl  ${I_DIR}                     &&
  install  -m  755  -g  games  freelords  ${I_DIR}              &&
  install  -m  755  -g  games  genmap.py  ${I_DIR}              &&
  install  -m  644  -g  games  common/*.so*  ${I_DIR}/common    &&
  install  -m  644  -g  games  graphic/*.so*  ${I_DIR}/graphic  &&
  install  -m  755  -g  games  ${SCRIPT_DIRECTORY}/freelords  /usr/games

)  >  $C_FIFO  2>&1
