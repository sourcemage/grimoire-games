
(
 sedit 's:# bones-dir:bones-dir /usr/share/games/nethackdir:' ${SOURCE_DIRECTORY}/hearse.conf &&
 sedit 's/# run-as-group/run-as-group/' ${SOURCE_DIRECTORY}/hearse.conf &&
# patch -p1 < $SCRIPT_DIRECTORY/hearse.conf.patch &&
 perl Makefile.PL				&&
 make all  &&
 prepare_install  &&
 make install
) > ${C_FIFO} 2>&1
