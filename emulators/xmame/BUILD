case  $CUSTOM in
  y|Y)  ${EDITOR:-nano}  makefile.unix  ;;
esac

rm  -f  $SPELL_CONFIG

(

  I_DIR="/usr/share/games/${SPELL}"         &&

  # Fix permission problems accessing ${SOURCE_DIRECTORY}/doc/ on install
  chown  -R  root.root  src                 &&
  rm  doc                                   &&
  ln  -sf  src/unix/doc  doc                &&

  make  PREFIX=${INSTALL_ROOT}/usr          \
        BINDIR=${INSTALL_ROOT}/usr/games    \
        CFLAGS="${CFLAGS/-O[3-9]/-O2}"	    \
        CXXFLAGS="${CXXFLAGS/-O[3-9]/-O2}"  \
        -f  makefile.unix                   &&
  prepare_install                           &&
  make  PREFIX=${INSTALL_ROOT}/usr          \
        BINDIR=${INSTALL_ROOT}/usr/games    \
        -f  makefile.unix                   \
        install                             &&
  mkdir  -p  ${I_DIR}                       &&
  chown  -R  root.games  ${I_DIR}           &&
  cp  -r  ctrlr  ${I_DIR}

) > $C_FIFO 2>&1
