if  [  "$XMESS_CUSTOM"  =  "y"  ];  then
  ${EDITOR:-nano}  makefile.unix
fi  &&

sedit  's:TARGET = mame:TARGET = mess:'  makefile.unix  &&

# Fix permission problems accessing ${SOURCE_DIRECTORY}/doc/ on install
chown  -R  root.root  src                 &&
rm  doc                                   &&
ln  -sf  src/unix/doc  doc                &&

make  PREFIX=${INSTALL_ROOT}/usr          \
      BINDIR=${INSTALL_ROOT}/usr/games    \
      CFLAGS="${CFLAGS/-O[3-9]/-O2}"      \
      CXXFLAGS="${CXXFLAGS/-O[3-9]/-O2}"  \
      -f  makefile.unix
