(
  sedit "s/BUILD_ARTS=NO/BUILD_ARTS=YES/g" Makefile	 &&
  sedit "s/SDLDIR=\/usr\/local\/lib/SDLDIR=\/usr\/lib\//g" Makefile	&&
  # Nice and easy compilation
  make build_release                                     &&

  cd release*                                            &&

  # The game*.so has to be in the baseq2 dir
  mkdir -p baseq2                                        &&
  mv game*.so baseq2                                     &&

  prepare_install                                        &&

  installdir=/usr/lib/quake2                             &&

  # Install the binaries
  mkdir -p ${installdir}/baseq2                          &&
  mkdir -p ${installdir}/baseq2/players                  &&
  mkdir -p ${installdir}/baseq2/video                    &&
  cp -pa * ${installdir}/                                &&

  # Copy the opengl maxpak
  unpack $SOURCE2 ${MD5[1]}                              &&
  cp -pa $SOURCE_CACHE/${SOURCE2} ${installdir}/baseq2/  &&

  # Copy the player models
  cp -pa ${BASE_PATH}/players/* ${installdir}/baseq2/players/  &&

  # Finally put an executable in /usr/games
  mkdir  -pv  /usr/games                                 &&
  cp  -pav  ${SCRIPT_DIRECTORY}/quake2  /usr/games
) > $C_FIFO 2>&1
