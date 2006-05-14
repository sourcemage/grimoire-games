true                  &&
# cd $SOURCE_DIRECTORY  &&
sedit "s/\CXFLAGS=\$(CFLAGS) \\\/CXFLAGS='\$(CFLAGS)' \\\/g" Makefile
sedit "s/-lpthread/-lpthread -lstdc++/g" Makefile
make  linux
