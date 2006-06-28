cd src  &&
sedit "s:CFLAGS	=	-pipe -Wall -W -DNO_DEBUG -g:CFLAGS	=	${CFLAGS} -Wall -W -DNO_DEBUG:" Makefile  &&
sedit "s:CXXFLAGS	=	-pipe -Wall -W -DNO_DEBUG -g:CXXFLAGS	=	${CXXFLAGS} -Wall -W -DNO_DEBUG:" \
Makefile  &&
sedit "s:/usr/X11R6:${INSTALL_ROOT}/usr:g" Makefile  &&
sedit "s:-cp BillardGL /usr/bin/BillardGL:-cp BillardGL ${INSTALL_ROOT}/usr/games/BillardGL:" Makefile  &&
sedit "s:-cp BillardGL /usr/bin/billardGL:-cp BillardGL ${INSTALL_ROOT}/usr/games/billardGL:" Makefile  &&
sedit "s:-mkdir -p /usr/share/BillardGL:-mkdir -p ${INSTALL_ROOT}/usr/share/games/BillardGL:" Makefile  &&
sedit "s:-cp -R Texturen /usr/share/BillardGL:-cp -R Texturen ${INSTALL_ROOT}/usr/share/games/BillardGL:" Makefile  &&
sedit "s:-cp -R lang /usr/share/BillardGL:-cp -R lang ${INSTALL_ROOT}/usr/share/games/BillardGL:" Makefile          &&
sedit "s:-mkdir -p /usr/share/doc/packages/BillardGL:-mkdir -p ${INSTALL_ROOT}/usr/share/doc/${SPELL}:" Makefile    &&
sedit "s:-cp README /usr/share/doc/packages/BillardGL:-cp README ${INSTALL_ROOT}/usr/share/doc/${SPELL}:" Makefile  &&
sedit "s:#define PFAD \"/usr/share/BillardGL/\":#define PFAD \"${INSTALL_ROOT}/usr/share/games/BillardGL/\":" Namen.h  &&
make
