(
if [ "$KDE" = "y" ]
then	./configure --prefix=/usr -with-kde $OPTS &&
		make	&&
		prepare_install	&&
		make install
		else
			if [ "$GTK" = "y" ] 
			then	./configure --prefix=/usr -with-gtk $OPTS &&
			make	&&
			prepare_install	&&
			make install
			else
				if [ "$X11" = "y" ] 
				then	./configure --prefix=/usr -without-gtk -without-kde $OPTS &&
				make	&&
				prepare_install	&&
				make install
                      		fi
			fi
fi
) > $C_FIFO 2>&1 
