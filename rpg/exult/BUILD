(
#swathe of gcc3.3 hacks for assert "undeclared"
if gcc -dumpversion > /dev/null ==3.3 ; then
sedit '8a\
\#include \<assert.h\>\' files/rwregress.cc 		&&
sedit '28a\
\#include \<assert.h\>\' files/databuf.h 		&&
sedit '28a\
\#include \<assert.h\>\' conf/xmain.cc 			&&
sedit '29a\
\#include \<assert.h\>\' usecode/compiler/ucfun.cc 	&&
sedit '29a\
\#include \<assert.h\>\' tools/cmanip.cc 		&&
sedit '22a\
\#include \<assert.h\>\' usecode/ucxt/src/ucdata.cc 	&&
sedit '22a\
\#include \<assert.h\>\' usecode/ucxt/src/ops.cc 	&&
sedit '22a\
\#include \<assert.h\>\' usecode/ucxt/src/ucfunc.cc 	&&
sedit '38a\
\#include \<assert.h\>\' usecode/ucxt/src/ucxt.cc 
fi  &&

  cp   audio/midi_drivers/forked_player.cc  \
       audio/midi_drivers/forked_player.cc.original

  sed  's:"playmidi","-v","-v","-e":"playmus","playmus","-r","44100":'  \
       audio/midi_drivers/forked_player.cc.original  >     \
       audio/midi_drivers/forked_player.cc

  ./configure  --prefix=${INSTALL_ROOT}/usr         \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               --bindir=${INSTALL_ROOT}/usr/games   \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1  &&  (

  cp  $SCRIPT_DIRECTORY/exult.cfg  \
             /usr/share/exult

  cd  sfx
  ../tools/expack -i drbg
  ../tools/expack -i drsi
  cp  drbgsfx.flx  /usr/share/exult
  cp  drsisfx.flx  /usr/share/exult

)
