(

  for file in *.tar.*; do
    if [ "${file#*.tar.}" = "gz" ]; then
      tar xfz $file
    elif [ "${file#*.tar.}" = "bz2" ]; then
      tar xfj $file
    fi &&
    
    extracted=${file%.tar*} &&
    newname=`echo $extracted | tr A-Z a-z` &&
    newname=${newname%-*} &&
    mv $extracted $newname
  done &&
  
  cp $SCRIPT_DIRECTORY/soya_quickfix.diff . &&
  patch -p1 -d soya < soya_quickfix.diff &&

  sedit 's:# FreeFont:"/usr/X11R6/lib/X11/fonts/TTF/freefont/FreeSans.ttf",:'\
    soya/widget.py &&
  python ./setup.py build &&
  prepare_install &&
  python ./setup.py install
 
) > $C_FIFO 2>&1
