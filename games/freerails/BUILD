(
D_DIR=${INSTALLROOT}/usr/share/games/freerails/data
sh  ./autogen.sh  &&
  ./configure  --build=$BUILD        				\
                 $OPTS                 &&
#	         --prefix=${INSTALL_ROOT}/usr         		\
#		 --datadir=${INSTALL_ROOT}/usr/share/games 	\
#                 --sysconfdir=${INSTALL_ROOT}/etc     		\
#                 --localstatedir=${INSTALL_ROOT}/var  		\
#		 --bindir=${INSTALL_ROOT}/usr/games		\
  make                               &&
  prepare_install                    &&
#silly thing does not know how to make install
# make install
#also needs to be in datadir to initialise
install -m0755 $SCRIPT_DIRECTORY/freerails /usr/games
for i in  ui tilesets/default trains/overhead trains/sideon ui/buttons ui/cursors 
do mkdir -p ${D_DIR}/graphics/$i &&
   install -m0666 data/graphics/$i/*.png ${D_DIR}/graphics/$i
done &&
install -m0755 src/main/freerails ${INSTALL_ROOT}/usr/share/games/freerails/freerails 

)  >  ${C_FIFO}  2>&1
