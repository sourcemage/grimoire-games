(
OPTS="$OPTS --prefix=${INSTALL_ROOT}/usr --disable-debug"       &&
sedit "s/-lXi //" configure                                     &&
if [ "$KDE" = "y" ]
then	./configure --with-kde $OPTS                            &&
        make                                                    &&
        prepare_install                                         &&
        make install
else
  if [ "$GTK" = "y" ] 
  then	./configure --with-gtk $OPTS                            &&
        make                                                    &&
        prepare_install	                                        &&
        make install
  else
    if [ "$X11" = "y" ] 
    then	./configure --without-gtk                       \
                    --without-kde $OPTS                         &&
        make                                                    &&
        prepare_install                                         &&
        make install
     else default_build
    fi
  fi
fi
) > $C_FIFO 2>&1 
