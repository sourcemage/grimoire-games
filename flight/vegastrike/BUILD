[[ $CROSS_INSTALL == on ]]  && 
OPTS="$OPTS --host=${HOST} --build=${BUILD}"

#modify the sources to avoid the "glXGetProcAddressARB" error.
sedit  '1i #include <GL/glx.h>'            \
       $SOURCE_DIRECTORY/$SPELL/src/gldrv/gl_init.cpp  &&
sedit  '1i #define GLX_GLXEXT_PROTOTYPES'  \
       $SOURCE_DIRECTORY/$SPELL/src/gldrv/gl_init.cpp  &&

cd  $SOURCE_DIRECTORY/$SPELL  &&

aclocal       &&
autoconf      &&
automake  -a  &&

./configure  --prefix=${INSTALL_ROOT}/usr             \
         --sysconfdir=${INSTALL_ROOT}/etc             \
      --localstatedir=${INSTALL_ROOT}/var             \
             --mandir=${INSTALL_ROOT}/usr/share/man   \
            --infodir=${INSTALL_ROOT}/usr/share/info  \
       --enable-boost-128                             \
                      $OPTS                           &&

#remove "tools" to prevent an error while trying to make tools.
sedit  's/SUBDIRS\ =\ src\ objconv\ launcher\ tools/SUBDIRS\ =\ src\ objconv\ launcher/'  \
       Makefile                                                                           &&
make
