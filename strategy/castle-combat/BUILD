(
#Current Makefile.in fails due to man???
cp $SCRIPT_DIRECTORY/Makefile.in . &&

#to use the more update SDL_net headers
sedit "s/\"SDL_net\/SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/net.c &&
sedit "s/\"SDL_net\/SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/main.c &&
sedit "s/\"SDL_net\/SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/server.c &&
sedit "s/\"SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/SDL_net/SDLnet.c &&
sedit "s/\"SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/SDL_net/SDLnetselect.c &&
sedit "s/\"SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/SDL_net/SDLnetTCP.c &&
sedit "s/\"SDL_net.h\"/\<SDL\/SDL_net.h\>/g" src/SDL_net/SDLnetUDP.c &&
  ./configure  --build=${BUILD}      \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               ${OPTS}               &&
#Makefile magic to stop installation of SDL_net.h 
sedit "s/SDL_net.h/ /g" src/SDL_net/Makefile &&
  make                               &&
  prepare_install                    &&
  make    install

) > ${C_FIFO} 2>&1
