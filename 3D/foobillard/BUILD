  if spell_installed openglut; then
    sedit "s/glut.h/openglut.h/g" src/sys_stuff.c &&
    sedit "s/glut.h/openglut.h/g" src/billard3d.c &&
    sedit "s/-lglut/-lopenglut/g" src/Makefile.am &&
    sedit "s/-lglut/-lopenglut/g" src/Makefile.in
  fi &&
  sedit "s/CFLAGS = -Wall/CFLAGS = -Wall $CFLAGS -DGL_GLEXT_PROTOTYPES/g"  src/Makefile.in &&
  ./configure  --build=$BUILD              \
               --prefix=${INSTALL_ROOT}/usr               \
               --bindir=${INSTALL_ROOT}/usr/games         \
               --datadir=${INSTALL_ROOT}/usr/share/games  \
               $OPTS    &&
  make
