OPTS="--localedir=${INSTALL_ROOT}/usr/share/locale  \
--with-localesdir=${INSTALL_ROOT}/usr/share/locale ${XMOTO_OPTS} ${OPTS}"  &&

sedit 's:mangdir = $(mandir)/mang:mangdir = $(mandir)/man6:' Makefile.in  &&

default_games_build
