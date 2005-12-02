(
  if spell_ok arts ; then
  sedit "s/BUILD_ARTS=NO/BUILD_ARTS=YES/g" Makefile
  fi                                                                &&
  if ! spell_ok aalib ; then
  sedit "s/BUILD_AA=YES/BUILD_AA=NO/g" Makefile
  fi                                                                &&
  sedit "s/SDLDIR=\/usr\/local\/lib/SDLDIR=\/usr\/lib\//g" Makefile &&
  #change to new compiler opts to stop the warnings
  sedit "s/malign-loops/falign-loops/g" Makefile                    &&
  sedit "s/malign-jumps/falign-jumps/g" Makefile                    &&
  sedit "s/malign-functions/falign-functions/g" Makefile            &&
  # Change compiler CFLAGS
  sedit "s/-O2/$CFLAGS/g" Makefile                                  &&
  # Nice and easy compilation
  make build_release                                     &&

  cd release*                                            &&

  # The game*.so has to be in the baseq2 dir
  mkdir -p baseq2                                        &&
  mv game*.so baseq2                                     &&

  prepare_install                                        &&

  installdir=${INSTALL_ROOT}/usr/lib/quake2                             &&

  # Install the binaries
  mkdir -p ${installdir}/baseq2                          &&
  mkdir -p ${installdir}/baseq2/players                  &&
  mkdir -p ${installdir}/baseq2/video                    &&
  cp -pa * ${installdir}/                                &&

  # Copy the opengl maxpak
  unpack_file 2                              &&
  cp -pa $SOURCE_CACHE/${SOURCE2} ${installdir}/baseq2/  &&

  # Copy the player models
  cp -pa ${BASE_PATH}/players/* ${installdir}/baseq2/players/  &&

  # Finally put an executable in /usr/games
  mkdir  -pv  /usr/games                                 &&
  cp  -pav  ${SCRIPT_DIRECTORY}/quake2  /usr/games
) > $C_FIFO 2>&1
