(
  [[ $CROSS_INSTALL == on ]] && 
  OPTS="$OPTS --host=${HOST} --build=${BUILD}"

  #modify the sources to avoid the "glXGetProcAddressARB" error.
  sedit '1i #include <GL/glx.h>' $SOURCE_DIRECTORY/$SPELL/src/gldrv/gl_init.cpp &&
  sedit '1i #define GLX_GLXEXT_PROTOTYPES' $SOURCE_DIRECTORY/$SPELL/src/gldrv/gl_init.cpp &&
  
  cd $SOURCE_DIRECTORY/$SPELL		     &&

  aclocal 				     &&
  autoconf				     &&
  automake -a				     &&

  ./configure --prefix=${INSTALL_ROOT}/usr  \
          --sysconfdir=${INSTALL_ROOT}/etc  \
       --localstatedir=${INSTALL_ROOT}/var  \
              --mandir=${INSTALL_ROOT}/usr/share/man   \
             --infodir=${INSTALL_ROOT}/usr/share/info  \
 	--enable-boost-128
                       $OPTS                 &&
  #remove "tools" to prevent an error while trying to make tools.
  sedit 's/SUBDIRS\ =\ src\ objconv\ launcher\ tools/SUBDIRS\ =\ src\ objconv\ launcher/' Makefile		             &&
  make                                       &&
  prepare_install                            &&
  cd ../vssetup/src/			     &&
  perl ./build				     &&
  cd ../../data				     &&
  cp ../vssetup/src/bin/setup ./vssetup	     &&
  mv -f ../vegastrike/src/vegastrike .          &&
  cp ../vegastrike/src/networking/soundserver . &&
  cp ../vegastrike/launcher/vslauncher .     &&
  chmod 755 ../root-setup.sh                 &&
  install -m 755 ./vssetup ${INSTALL_ROOT}/usr/games/vssetup &&
  install -m 755 ./vegastrike ${INSTALL_ROOT}/usr/games/vegastrike &&
  install -m 755 ./vslauncher ${INSTALL_ROOT}/usr/games/vslauncher &&
  install -m 644 documentation/vegastrike.1 ${INSTALL_ROOT}/usr/share/man/man1/vegastrike.1 &&
  install -m 644 documentation/vslauncher.1 ${INSTALL_ROOT}/usr/share/man/man1/vslauncher.1 &&
  install -m 644 documentation/vsinstall.1 ${INSTALL_ROOT}/usr/share/man/man1/vsinstall.1 &&
  install -m 644 documentation/vssetup.1 ${INSTALL_ROOT}/usr/share/man/man1/vssetup.1  &&
  mkdir -p ${INSTALL_ROOT}/usr/share/vegastrike &&
  cd .. &&
  mv -f data ${INSTALL_ROOT}/usr/share/vegastrike &&
  rm -rf ~/.vegastrike.3.x 		     &&
  mv -f ~/.vegastrike ~/.vegastrike.old	     &&
  mkdir -p ~/.vegastrike                        &&
  echo "default" > ~/.vegastrike/save.4.x.txt &&
  cp ${INSTALL_ROOT}/usr/share/vegastrike/data/setup.config ~/.vegastrike/  &&
  cp ${INSTALL_ROOT}/usr/share/vegastrike/data/.vegastrike/*.m3u ~/.vegastrike/ &&
  cp ${INSTALL_ROOT}/usr/share/vegastrike/data/vegastrike.config ~/.vegastrike/ &&
  echo "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" &&
  echo "please, run vssetup to tweak your config" &&
  echo "then run vslauncher to start Vega Strike" &&
  echo "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" 
) > $C_FIFO 2>&1

