(

#patch share/config.h
patch -p1 < $SCRIPT_DIRECTORY/neverball-directory.patch &&
sedit 's/#X11_PATH/X11_PATH/' $SOURCE_DIR/Makefile &&
case  $CUSTOM in
  y|Y)  ${EDITOR:-nano}  share/config.h  ;;
esac &&


  make all &&
#copy data and binaries
 prepare_install &&
 mkdir /usr/share/neverball &&
 cp -R data /usr/share/neverball/data &&
 cp neverball neverputt mapc /usr/games/ 

) > ${C_FIFO} 2>&1
