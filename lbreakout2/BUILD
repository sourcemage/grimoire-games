(

  # works around a bug in gcc 3.2
  CFLAGS=`echo ${CFLAGS} |sed s:"-O.::"`
  
  ./configure  --build=${BUILD}                  \
               --prefix=/usr                     \
               --sysconfdir=/etc                 \
               --localstatedir=/var              \
               --bindir=/usr/games               \
               --with-highscore-path=/var/games  &&
               ${OPTS}                           &&

  make                                           &&
  prepare_install                                &&
  make    install

) > ${C_FIFO} 2>&1
