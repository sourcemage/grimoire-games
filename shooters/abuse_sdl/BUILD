(
  ./configure  --build=${BUILD}            \
	       --prefix=${INSTALL_ROOT}/usr \
	       --bindir=${INSTALL_ROOT}/usr/share/games/abuse \
               ${OPTS}                     &&
  make                                     &&
  prepare_install                          &&
  make    install                          
  mkdir -p ${INSTALL_ROOT}/usr/games       &&     
echo -e "#! /bin/sh \n if ! [ -f ~/.abuse/gamma.lsp ]; then mkdir -p ~/.abuse && cp \
${INSTALL_ROOT}/usr/share/games/abuse/gamma.lsp ~/.abuse/gamma.lsp ; fi \n exec \
${INSTALL_ROOT}/usr/share/games/abuse/abuse.sdl -datadir \
${INSTALL_ROOT}/usr/share/games/abuse \$*" > .abuse && 
install -m0755 .abuse ${INSTALL_ROOT}/usr/games/abuse    &&

  cd  ${INSTALL_ROOT}/usr/share/games/abuse              &&
  unpack  ${SOURCE2}   ${MD5[1]}           &&
  cp $SCRIPT_DIRECTORY/gamma.lsp .         

) > $C_FIFO 2>&1
