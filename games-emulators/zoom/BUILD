
(
 CFLAGS=-I/usr/include/freetype2		\
  ./configure --prefix=/usr			\
  ${OPTS}					&&
 make						&&
 prepare_install                                $$
 make install					&&
 cp src/zoom.ico /usr/share/pixmaps		&&
 cp manual/zoom-icon.png /usr/share/pixmaps
) > ${C_FIFO} 2>&1
