(
	[[ `echo $OPTS | grep "nosound"` ]] && INST_SOUND="nosound" ||
		INST_SOUND=""
	
	ARGS="PREFIX=/usr/ DATA_PREFIX=/usr/share/defendguin/"

	make $INST_SOUND $ARGS
	
	make install $ARGS


) > $C_FIFO
