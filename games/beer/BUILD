(
  prepare_install                  &&
  if ! [ -d /pub/ ]; 
    then mkdir /pub; 
  fi
  cp $SOURCE_DIRECTORY/beer /pub
) > $C_FIFO 2>&1
