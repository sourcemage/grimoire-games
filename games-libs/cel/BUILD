(
  # read the vars
  . ${INSTALL_ROOT}/etc/profile.d/crystalspace.sh                                &&
  cp ${INSTALL_ROOT}$CRYSTAL/bin/cs-config .                                     &&

  make                                                                           &&
  prepare_install                                                                &&

  sedit "s/local/share/" $SOURCE_DIRECTORY/cel.cex                               &&
  cp -r $SOURCE_DIRECTORY           ${INSTALL_ROOT}/usr/share                    &&
  ln -sf ${INSTALL_ROOT}/usr/share/cel/*.so ${INSTALL_ROOT}/$CRYSTAL/lib         &&
  cp -r $SOURCE_DIRECTORY/cel.cex   ${INSTALL_ROOT}/$CRYSTAL/bin                 &&
  ln -sf ${INSTALL_ROOT}/$CRYSTAL/bin/cel.cex ${INSTALL_ROOT}/usr/games/cel.cex  &&
  ln -sf ${INSTALL_ROOT}/usr/share/cel/celtst ${INSTALL_ROOT}/usr/games/celtst   &&
echo -e "#!/bin/sh \n
# Needed to make symlinks/shortcuts work. \n
# the binaries must run with correct working directory \n
cd "${INSTALL_ROOT}/usr/share/cel/" \n ./celtst \$* \n exit \$?" >  myceltst &&
install myceltst ${INSTALL_ROOT}/usr/games/celtst &&
 # have just copied shit so trim it out 
  rm -rf ${INSTALL_ROOT}/usr/share/$SPELL/{autogen.sh,mk,CVS,msvc,old.libraries,plimp,blpython,bltest,persist,pf,configure.ac,Makefile,Jam*}

) > $C_FIFO 2>&1

