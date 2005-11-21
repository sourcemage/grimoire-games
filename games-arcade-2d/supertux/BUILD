if [[ "${SUPERTUX_SVN}" == "y" ]]
then
  ./configure --prefix=${INSTALL_ROOT}/usr \
              --sysconfdir=${INSTALL_ROOT}/etc \
              --mandir=${INSTALL_ROOT}/usr/share/man \
              --infodir=${INSTALL_ROOT}/usr/share/info \
              --bindir=${INSTALL_ROOT}/usr/games \
              --datadir=${INSTALL_ROOT}/usr/share/games \
              --localstatedir=${INSTALL_ROOT}/var/games $OPTS &&
  jam
  ./autogen.sh
  ./configure --prefix=${INSTALL_ROOT}/usr \
              --sysconfdir=${INSTALL_ROOT}/etc \
              --mandir=${INSTALL_ROOT}/usr/share/man \
              --infodir=${INSTALL_ROOT}/usr/share/info \
              --bindir=${INSTALL_ROOT}/usr/games \
              --datadir=${INSTALL_ROOT}/usr/share/games \
              --localstatedir=${INSTALL_ROOT}/var/games $OPTS &&
  jam
else
  default_games_build
fi
