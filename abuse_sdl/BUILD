(
  ./configure  --build=${BUILD}            \
	       --prefix=${INSTALL_ROOT}/usr \
	       --bindir=${INSTALL_ROOT}/usr/share/games/abuse \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install                          
echo -e "#! /bin/sh \n exec ${INSTALL_ROOT}/usr/share/games/abuse/abuse.sdl -datadir \
${INSTALL_ROOT}/usr/share/games/abuse \$*" > .abuse && 
install -m0755 .abuse ${INSTALL_ROOT}/usr/games/abuse    &&

  cd  /usr/share/games/abuse               &&
  unpack  ${SOURCE2}   ${MD5[1]}           &&
  cp $SCRIPT_DIRECTORY/gamma.lsp .         

) > $C_FIFO 2>&1
