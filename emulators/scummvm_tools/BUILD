sedit "s@^CFLAGS[[:blank:]]*:=.*-g -O@CFLAGS  +=${CFLAGS}@g"        Makefile  &&
sedit "s@^LDFLAGS[[:blank:]]*:=.*@LDFLAGS  +=${LDFLAGS}@g"          Makefile  &&
sedit "s@^CXXFLAGS[[:blank:]]*:=.*-g -O@CXXFLAGS  +=${CXXFLAGS}@g"  Makefile  &&

make
