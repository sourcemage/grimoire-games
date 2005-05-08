(
  cd $SOURCE_DIRECTORY/nil &&
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --bindir=${INSTALL_ROOT}/usr/games		\
                 $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make install  &&
  mkdir -p ${INSTALL_ROOT}/usr/share/games/nil &&
  mkdir -p ${INSTALL_ROOT}/usr/doc/nil &&
  cp -r $SOURCE_DIRECTORY/docs/* ${INSTALL_ROOT}/usr/doc/nil &&
  cp -r $SOURCE_DIRECTORY/gfx ${INSTALL_ROOT}/usr/share/games/nil
) > $C_FIFO 2>&1
