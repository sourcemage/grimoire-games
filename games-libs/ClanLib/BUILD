(
 OPTS="$OPTS --enable-debug=no"
#gcc3.3 hack
sedit '25a\
\#include \<assert.h\>\' Sources/Core/IOData/Unix/directory_scanner_unix.h &&

 default_build

)  >  ${C_FIFO}  2>&1
