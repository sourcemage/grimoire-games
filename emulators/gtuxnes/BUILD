(
  prepare_install                                &&
  make 						&&
  mkdir /usr/libexec/gtuxnes &&
  cp *.o /usr/libexec/gtuxnes			&&
  cp gtuxnes /usr/libexec/gtuxnes			&&
  chown root:root /usr/libexec/gtuxnes/*		&&
  echo -e "#! /bin/bash\ncd /usr/libexec/gtuxnes\nexec ./gtuxnes" > /usr/games/gtuxnes	&&
  chmod a+x /usr/games/gtuxnes	&&
  chown root:root /usr/games/gtuxnes

) > $C_FIFO 2>&1