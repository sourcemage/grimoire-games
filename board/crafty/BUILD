(
  sedit "s/\CXFLAGS=\$(CFLAGS) \\\/CXFLAGS='\$(CFLAGS)' \\\/g" Makefile
  sedit "s/-lpthread/-lpthread -lstdc++/g" Makefile
  make linux                     &&
  prepare_install                    &&
  cp crafty /usr/games

) > $C_FIFO 2>&1
