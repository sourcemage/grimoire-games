(

sedit 's:^#define CONFIG_DATA.*$:#define CONFIG_DATA \"/usr/share/neverball/data\":' Makefile &&
sedit 's/#X11_PATH/X11_PATH/' Makefile &&

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
