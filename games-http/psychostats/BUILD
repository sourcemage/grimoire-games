(

  sedit  "s:/home/httpd/html/stats:/usr/share/${SPELL}/${VERSION}:g"  stats.cfg
  sedit  "s:/usr/games/halflife/hlds_l/cstrike/logs:${LOG_PATH}:g"    stats.cfg

  prepare_install                                 &&
  echo  "Yes
Yes"  |  ./install.pl                             &&
  cp  -r  themes  /usr/share/${SPELL}/${VERSION}  &&
  cp  *.cfg  /usr/share/${SPELL}/${VERSION}       &&
  cp  *.txt  /usr/share/${SPELL}/${VERSION}       &&
  cp  changelog  cronexample  stats.pl            \
             /usr/share/${SPELL}/${VERSION}

)  >  ${C_FIFO}  2>&1
