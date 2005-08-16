rm libtool &&
rm missing &&
sedit 's!datadir/games/abuse!datadir/abuse!' configure.in &&
sedit 's!(datadir)/games/abuse!(datadir)/abuse!' Makefile.in &&
sedit 's!(datadir)/games/abuse!(datadir)/abuse!' Makefile.am &&
autoreconf -fi &&
default_games_build

