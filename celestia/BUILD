(
if [ "$KDE" = "y" ]
then	./configure --prefix=${INSTALL_ROOT}/usr -with-kde $OPTS &&
		make	&&
		prepare_install	&&
		make install
		else
			if [ "$GTK" = "y" ] 
			then	./configure --prefix=${INSTALL_ROOT}/usr -with-gtk $OPTS &&
			make	&&
			prepare_install	&&
			make install
			else
				if [ "$X11" = "y" ] 
				then	./configure --prefix=${INSTALL_ROOT}/usr -without-gtk -without-kde $OPTS &&
					make	&&
					prepare_install	&&
					make install
                      		else default_build
				fi
			fi
fi
) > $C_FIFO 2>&1 
