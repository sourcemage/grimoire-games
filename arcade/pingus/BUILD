(
if [ $(gcc -dumpversion)   == "3.3" ] ; then
sedit '20a\
\#include \<assert.h\>\' src/editor/generic_property_frame.cxx  &&
sedit '20a\
\#include \<assert.h\>\' src/gui/root_gui_manager.cxx 		&&
sedit '20a\
\#include \<assert.h\>\' src/worldmap/dot.cxx 			&&
sedit '20a\
\#include \<assert.h\>\' src/worldmap/graph.hxx  		&&
sedit '27a\
\#include \<assert.h\>\' src/blitter_impl.hxx 			&&
sedit '23a\
\#include \<assert.h\>\' src/col_map.cxx 			&&
sedit '20a\
\#include \<assert.h\>\' src/console.cxx 			&&
sedit '20a\
\#include \<assert.h\>\' src/demo_recorder.cxx 			&&
sedit '20a\
\#include \<assert.h\>\' src/pingu_holder.cxx  			&&
sedit '20a\
\#include \<assert.h\>\' src/savegame_manager.cxx  
fi  &&
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
  make install

)  >  ${C_FIFO}  2>&1
