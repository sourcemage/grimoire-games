OPTS="$OPTS --enable-png --enable-debug=no --enable-dyn" &&

#gcc3.3 hack
if [[ $(gcc -dumpversion)   == 3.3* ]] ; then
sedit '25a\
\#include \<assert.h\>\' Sources/Core/IOData/Unix/directory_scanner_unix.h
fi                                                       &&

#conflicts between NVIDIA and xfree86/MesaLib headers
if  !  spell_installed  nvidia_headers
then export CFLAGS="$CFLAGS -DGLX_GLXEXT_LEGACY"         &&
    export CXXFLAGS="$CXXFLAGS -DGLX_GLXEXT_LEGACY"  

fi                                                       &&

default_build
