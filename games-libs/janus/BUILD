if [ "${CVS}" = "yes" ];  then
  ./autogen.sh   &&
  default_build
else
  patch  -p1  <  ${SCRIPT_DIRECTORY}/gcc-3.3.patch  &&
  default_build
fi
