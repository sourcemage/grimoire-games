(

  # Nice and easy compilation
  make build_release

  cd release*

  # The game*.so has to be in the baseq2 dir
  mkdir -p baseq2
  mv game*.so baseq2

  prepare_install

  installdir=/usr/lib/quake2

  # Install the binaries
  mkdir -p ${installdir}/baseq2
  mkdir -p ${installdir}/baseq2
  mkdir -p ${installdir}/baseq2/video
  cp -pa * ${installdir}/

  # Copy the player models
  cp -pa ${BASE_PATH}/players/* ${installdir}/baseq2/players/

  # Finally put an executable in /usr/games
  mkdir  -pv  /usr/games
  cp  -pav  ${SCRIPT_DIRECTORY}/quake2  /usr/games

) > $C_FIFO 2>&1
