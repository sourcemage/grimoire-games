if  [  "$CVS"  =  "y"  ];  then
  ./autogen.sh
else
  patch  -p1  <  $SCRIPT_DIRECTORY/entityforge-0.2.gtkmm2.patch      &&
  patch  -p1  <  $SCRIPT_DIRECTORY/entityforge-0.2.gtkglextmm.patch
fi  &&

default_build
