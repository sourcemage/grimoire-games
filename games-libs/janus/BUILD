(
#gcc3.3 hack
if gcc -dumpversion > /dev/null ==3.3 ; then
sedit '26a\
\#include \<assert.h\>\' bindings/gtk/pushbutton.h 
fi &&
 default_build

)  >  ${C_FIFO}  2>&1
