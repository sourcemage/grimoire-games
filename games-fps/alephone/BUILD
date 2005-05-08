(
if grep -q SDL $SPELL_CONFIG;
then export CFLAGS="${CFLAGS} -DHAVE_OPENGL=0"   &&
     export CXXFLAGS="${CXXFLAGS} -DHAVE_OPENGL=0"   &&
     OPTS="${OPTS} --disable-opengl"
fi &&
if grep -q OPENGL $SPELL_CONFIG;
then OPTS="${OPTS} --enable-opengl"
fi &&

export LIBS="${LIBS}  -L/usr/X11R6/lib/ -lGL -lGLU"  &&
  ./autogen.sh  --prefix=${INSTALL_ROOT}/usr                                                         \
                --sysconfdir=${INSTALL_ROOT}/etc                                                     \
                --localstatedir=${INSTALL_ROOT}/var                                                  \
	        --datadir=${INSTALL_ROOT}/usr/share/games 					     \
	        --bindir=${INSTALL_ROOT}/usr/games						     \
                $OPTS                                                                                &&

  sedit "s:#include <SDL_net/SDL_net.h>:#include <SDL/SDL_net.h>:g" Source_Files/Misc/sdl_network.h  &&

  make                                                                                               &&
  prepare_install                                                                                    &&
  make    install

) > $C_FIFO 2>&1


