(

  if ! spell_installed NVIDIA_headers;
     then export CFLAGS="$CFLAGS -DGLX_GLXEXT_PROTOTYPES" 
  fi                                                                &&

  ./configure  --build=${BUILD}                                     \
               --prefix=${INSTALL_ROOT}/usr                                        \
               --sysconfdir=${INSTALL_ROOT}/etc                                    \
               --localstatedir=${INSTALL_ROOT}/var                                 \
               --bindir=${INSTALL_ROOT}/usr/games                                  \
               --with-tcl-lib-name=tcl`gaze installed tcl | cut -d. -s -f1-3 | cut -c -3` \
               --disable-sdltest                                    \
               --with-data-dir=${INSTALL_ROOT}/usr/share/${SPELL}-data-${VERSION}  \
               ${OPTS}                                              &&
  make                                                              &&
  prepare_install                                                   &&
  make    install                                                   &&
  chmod  -R a+r  ${SPELL}-data-${VERSION}                           &&
  cp     -r      ${SPELL}-data-${VERSION}  /usr/share

) > ${C_FIFO} 2>&1

