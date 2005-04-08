# sedit  "s:/usr/games/lib/nethackdir:/var/lock:"  include/unixconf.h  &&
# sedit  "s:/usr/games/lib/nethackdir:/var/lib/games/nethack:"  include/config.h       &&

sedit  "s:/usr/local/bin/timidity -idqq %s:/usr/bin/playmus -r 44100 %s:"  \
       win/jtp/gamedata/config/jtp_opts.txt

sedit   "s/-O2 -fomit-frame-pointer/$CFLAGS/"     \
        sys/unix/Makefile.src                     &&

sh    sys/unix/setup.sh                           &&
make_single                                       &&
make  all                                         &&
