(
sedit "s/\/usr\/local/\/usr/g" Makefile 	&&
sedit "s/CFLAGS=-O2/CFLAGS=$CFLAGS/g" Makefile 	&&
  make                               		&&
  prepare_install                    		&&
  mkdir -p ${INSTALL_ROOT}/usr/share/icons/hicolor/{16x16,48x48}/apps/    &&
  make install			    		&&
cd tuxpaint-stamps-2003.02.22			&&
sedit "s/\/usr\/local/\/usr/g" Makefile 	&&
make install 
)  >  ${C_FIFO}  2>&1
