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
  mkdir -p ${installdir}/baseq2/players
  cp -pa * ${installdir}/

  # Copy the player models
  cp -pa ${BASE_PATH}/players/* ${installdir}/baseq2/players/

  # Either copy or link the game data
  for i in `ls ${BASE_PATH} | grep pak`; do
    case  $COPY_PAK  in 
      y|Y|j|J)  cp  -pav  ${BASE_PATH}/${i}  ${installdir}/baseq2/${i}  ;;
            *)  ln  -sfv  ${BASE_PATH}/${i}  ${installdir}/baseq2/${i}  ;;
    esac
  done

  # Either copy or link the videos
  case  $COPY_VID  in 
    y|Y|j|J)  cp  -pav  ${BASE_PATH}/video  ${installdir}/baseq2/  ;;
          *)  ln  -sfv  ${BASE_PATH}/video  ${installdir}/baseq2/  ;;
  esac

  # Finally put an executable in /usr/games
  mkdir  -pv  /usr/games
  cp  -pav  ${SCRIPT_DIRECTORY}/quake2  /usr/games

) > $C_FIFO 2>&1
