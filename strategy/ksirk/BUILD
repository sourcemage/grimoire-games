(
sedit "s/am__api_version=\"1.4\"/am__api_version=\"1.7\"/g" configure &&
sedit "s/\$(DESTDIR)\$(KDE_ICON)\/hi16-app-ksirk.png/\$(DESTDIR)\$(kde_icondir)\/hicolor\/16x16\/apps\/ksirk.png/g" ksirk/Makefile.in &&
sedit "s/\$(DESTDIR)\$(KDE_ICON)\/hi32-app-ksirk.png/\$(DESTDIR)\$(kde_icondir)\/hicolor\/32x32\/apps\/ksirk.png/g" ksirk/Makefile.in &&
sedit "s/\$(DESTDIR)\$(KDE_ICON)\/hi48-app-ksirk.png/\$(DESTDIR)\$(kde_icondir)\/hicolor\/48x48\/apps\/ksirk.png/g" ksirk/Makefile.in &&
  ./configure  --build=$BUILD                      \
	       --prefix=${INSTALL_ROOT}/usr        \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  mkdir -p ${INSTALL_ROOT}/usr/share/icons/hicolor/16x16/apps &&
  make    install

)  >  $C_FIFO  2>&1
