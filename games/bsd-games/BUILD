(

  yes "" | ./configure                              &&
  make                                              &&
  prepare_install                                   &&
  make install                                      &&
  chown  games.games  /var/games/robots_roll        &&
  chown  games.games  /var/games/sail               &&
  chown  games.games  /var/games/saillog            &&
  chown  games.games  /var/games/snake.log          &&
  chown  games.games  /var/games/snakerawscores     &&
  chown  games.games  /var/games/tetris-bsd.scores  &&
  chown  games.games  /var/games/atc_score          &&
  chown  games.games  /var/games/battlestar.log     &&
  chown  games.games  /var/games/cfscores           &&
  chown  games.games  /var/games/criblog

) > $C_FIFO 2>&1
