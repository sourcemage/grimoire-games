
(
I_DIR="${INSTALL_ROOT}/usr/share/games/abe" &&

  sh  ./autogen.sh  &&
  ./configure  --build=$BUILD        				\
	         --prefix=${INSTALL_ROOT}/usr         		\
		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
                 --sysconfdir=${INSTALL_ROOT}/etc     		\
                 --localstatedir=${INSTALL_ROOT}/var  		\
		 --bindir=${INSTALL_ROOT}/usr/games		\
                 $OPTS                 &&
  make                               &&
  prepare_install                    &&
#fake a make install
mkdir -p -m0777 ${I_DIR} &&
install -m0755 abe ${I_DIR} &&
for i in savegame maps images sounds
do mkdir -p -m0777 ${I_DIR}/$i && install -m0666 $i/* ${I_DIR}/$i/
done
chown -R root.games ${I_DIR} &&
echo -e "#! /bin/sh \n cd ${I_DIR} && \n exec ./abe \$*" >runabe &&
mkdir -p /usr/games                                              &&
install -m0755 -g games runabe ${INSTALL_ROOT}/usr/games/abe
)  >  ${C_FIFO}  2>&1
