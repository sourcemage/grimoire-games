sedit "s:-g -O2 -Wall:${CFLAGS}:" src/Makefile  &&
sedit "s:-lSDL_image:${LDFLAGS} -lSDL_image:g" src/Makefile  &&

if  [  "$AIRSTRIKE_SOUND"  !=  "y"  ];  then
  make
else
  make ${SPELL}-sound
fi
