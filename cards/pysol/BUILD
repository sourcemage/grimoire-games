(

  cp  $SCRIPT_DIRECTORY/Makefile  $SOURCE_DIRECTORY  &&

  if  [  -d  pysol-sound-server-${SOUNDVER}  ]
  then
    cd  pysol-sound-server-${SOUNDVER}/src                   &&
    cp  ${SCRIPT_DIRECTORY}/Makefile.sound  Makefile         &&
    ./configure  --prefix=${INSTALL_ROOT}/usr                \
                 --bindir=${INSTALL_ROOT}/usr/games          \
                 --datadir=${INSTALL_ROOT}/usr/share/games   \
                 --sysconfdir=${INSTALL_ROOT}/etc            \
                 --localstatedir=${INSTALL_ROOT}/var         \
                $OPTS                                        &&
    make                                                     &&
    make  test                                               &&
    cd    ../..
  fi                                                 &&

  prepare_install                                    &&
  make    install                                    &&


  if  [  -d  pysol-sound-server-${SOUNDVER}  ]
  then
    echo  "Installing pysol-sound-server v${SOUNDVER}..."
    cd  pysol-sound-server-${SOUNDVER}/src           &&
    make  install                                    &&
    cd    ../..
  fi                                                 &&

  if  [  -d  pysol-music-${MUSICVER}  ]
  then
    echo  "Installing pysol-music v${MUSICVER}..."
    cp  -p  pysol-music-${MUSICVER}/data/music/*     \
            /usr/share/games/pysol/4.80/music
  fi                                                 &&

  if  [  -d  pysol-cardsets-${CARDSVER}  ]
  then
    echo  "Installing pysol-cardsets v${CARDSVER}..."
    cp  -a  data/cardset-*                           \
            /usr/share/games/pysol/4.80
  fi

) > $C_FIFO 2>&1

