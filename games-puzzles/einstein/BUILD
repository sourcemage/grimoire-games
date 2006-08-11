sedit 's:PREFIX=/usr/local:PREFIX=${INSTALL_ROOT}/usr:' Makefile     &&
sedit "s:OPTIMIZE=#-O6 -march=pentium4 -mfpmath=sse -fomit-frame-pointer -funroll-loops:OPTIMIZE=$CFLAGS:" Makefile     &&
sedit 's:$(INSTALL) -s -D $(TARGET) $(PREFIX)/bin/$(TARGET):$(INSTALL) -s -D $(TARGET) $(PREFIX)/games/$(TARGET):' Makefile &&
sedit 's:$(INSTALL) -D einstein.res $(PREFIX)/share/einstein/res/einstein.res:$(INSTALL) -D einstein.res $(PREFIX)/share/games/einstein/res/einstein.res:' Makefile &&
sedit "s:PREFIX L\"/share/einstein:L\"${INSTALL_ROOT}/usr/share/games/einstein:" main.cpp  &&
make  &&
cd mkres  &&
sedit "s:OPTIMIZE=-O6:OPTIMIZE=$CFLAGS:" Makefile     &&
make  &&
cd ../res  &&
./build.sh  &&
cd ${SOURCE_DIRECTORY}
