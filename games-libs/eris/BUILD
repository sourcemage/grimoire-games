if [ "${CVS}" = "yes" ];  then
  ./autogen.sh   &&
  default_build
else
  export  CPPFLAGS="$CPPFLAGS -I/usr/include/Atlas-C++-0.4/"  &&
  default_build
fi
