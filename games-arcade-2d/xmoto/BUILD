OPTS="--with-localesdir=${INSTALL_ROOT}/usr/share/locale ${XMOTO_OPTS} ${OPTS}"  &&

sedit 's:mangdir = $(mandir)/mang:mangdir = $(mandir)/man6:' Makefile.in          &&
sedit "s:${datarootdir}/locale:${INSTALL_ROOT}/usr/share/locale:" configure       &&
sedit "s:$datadir/locale:${INSTALL_ROOT}/usr/share/locale:" configure             &&
sedit 's:$(datadir)/locale:$(prefix)/share/locale:' po/Makefile.in.in             &&

default_games_build
