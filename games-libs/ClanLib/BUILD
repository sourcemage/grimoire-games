(
 OPTS="$OPTS --enable-debug=no"
#gcc3.3 hack
if gcc -dumpversion > /dev/null ==3.3 ; then
sedit '25a\
\#include \<assert.h\>\' Sources/Core/IOData/Unix/directory_scanner_unix.h
fi  &&
 default_build

)  >  ${C_FIFO}  2>&1
