(
sedit "s/\/usr\/local/\/usr/g" Makefile 	&&
sedit "s/CFLAGS=-O2/CFLAGS=$CFLAGS/g" Makefile 	&&
  make                               		&&
  prepare_install                    		&&
  make install			    		&&
cd tuxpaint-stamps-2003.02.22			&&
sedit "s/\/usr\/local/\/usr/g" Makefile 	&&
make install 
)  >  ${C_FIFO}  2>&1
