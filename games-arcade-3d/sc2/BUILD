#stupid build system needs input, it has 5 menu entries.
#they change with every release so all i can do is list "current" ones
#1)Debugging toggle
#2)Opengl is autodetected so i leave that
#3)Sound is SDL_mixer we leave that too
#4)default is fine for this too
#5) installation path (BASTARDS!!!) 
#turn off debug
echo -e "1 \n 1 \n \n" | ./build.sh  uqm  config  &&
#change installation paths

echo -e "5 \n 1 \n ${INSTALL_ROOT}/usr/share/games/ \n 2 \n ${INSTALL_ROOT}/usr/games/ \n \
3 \n ${INSTALL_ROOT}/usr/share/games/ \n 4 \n ${INSTALL_ROOT}/usr/share/games/ \n \n" \
 |sh  build.sh  uqm  config   &&
  sh  build.sh  uqm  depend   &&
  sh  build.sh  uqm
