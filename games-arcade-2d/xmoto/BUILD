OPTS="${XMOTO_OPTS} ${OPTS}"  &&

sedit "s:USE_GETTEXT:HAVE_GETTEXT:g" src/Locales.h    &&
sedit "s:USE_GETTEXT:HAVE_GETTEXT:g" src/Locales.cpp  &&

sedit 's:mangdir = $(mandir)/mang:mangdir = $(mandir)/man6:' Makefile.in  &&

default_games_build
