(

  sedit  's/0.9.5/0.9.2/'  configure          &&
  ./configure --prefix=${INSTALL_ROOT}/usr    \
          --sysconfdir=${INSTALL_ROOT}/etc    \
       --localstatedir=${INSTALL_ROOT}/var    \
                       $OPTS                  &&
  make                                        &&
  prepare_install                             &&
  make    install                             &&
  cp  -r  sear-media*  /usr/share/sear/       &&
  sedit  's:runScript:run_script:'            \
         media.script                         &&
  cp  media.script  /usr/share/sear           &&
  chown  -R  root.games  /usr/share/sear      &&
  chmod  -R  a+r         /usr/share/sear

)  >  ${C_FIFO}  2>&1
