(

  # works around a bug in gcc 3.2
  CFLAGS=`echo $CFLAGS |sed s:"-O.::"`
  
  ./configure  --prefix=/usr                     \
               --bindir=/usr/games               \
               --with-highscore-path=/var/games  &&

  make                               &&
  prepare_install                    &&
  make    install

) > $C_FIFO 2>&1
