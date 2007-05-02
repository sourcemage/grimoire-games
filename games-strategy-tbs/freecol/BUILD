source  $INSTALL_ROOT/etc/profile.d/ant.sh  &&
ant  &&

if  list_find  "$OPTS"  '--with-docs';  then
  cd  doc         &&
  make  ||  true  &&
  rm -f  FreeCol.{aux,idx,ilg,ind,log,out,toc,tex} Makefile
  cd  ..
fi
