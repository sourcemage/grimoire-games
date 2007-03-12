#sedit "s/\CXFLAGS=\$(CFLAGS) \\\/CXFLAGS='\$(CFLAGS)' \\\/g" Makefile  &&
unset CFLAGS  &&
sedit '/-o crafty/s/CC/CXX/g' Makefile  &&
sedit "s:\"crafty.hlp\":\"${TRACK_ROOT}/usr/share/games/${SPELL}/crafty.hlp\":" option.c  &&
sedit "s/-lpthread/-lpthread -lstdc++/g" Makefile  &&
sedit "s/-lstdc++/-lpthread -lstdc++/g" Makefile  &&
sedit "s/-fno-gcse//g" Makefile  &&
sedit "s/-fforce-mem//g" Makefile  &&
sedit "s/-g//g" Makefile  &&
make  linux
