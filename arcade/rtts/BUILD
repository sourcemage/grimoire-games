(
I_DIR=${INSTALL_ROOT}/usr/share/games/rtts
export $CFLAGS
cd source/rtts && 
export BASE_CFLAGS="$CFLAGS"
  make release  && 
  prepare_install &&
#fudge install
  mkdir -p $I_DIR &&
  install -m0755  i386_release/rtts $I_DIR &&
cd $SOURCE_DIRECTORY &&
#hack to clean up install
rm -rf readme.txt SDL.dll game rtts rtts.exe source old.libraries
for i in * 
do if [ -f $i ] 
    then install -m0666 $i $I_DIR 
 	else if  [ -d $i ] 
	then mkdir $I_DIR/$i && cd $i && install -m0666 * $I_DIR/$i && cd $SOURCE_DIRECTORY
	fi
    fi
done 
echo -e "#! /bin/bash \n cd ${INSTALL_ROOT}/usr/share/games/rtts && ./rtts \$*" > .gameplay &&
install -m0755 .gameplay /usr/games/rtts
 
) > $C_FIFO 2>&1
