case  $CUSTOM in
  y|Y)  ${EDITOR:-nano}  makefile.unix  ;;
esac

rm  -f  $SPELL_CONFIG

(

  # Fix permission problems accessing ${SOURCE_DIRECTORY}/doc/ on install
  chown  -R  root.root  *                   &&

  make  PREFIX=/usr                         \
        BINDIR=/usr/games                   \
        CFLAGS="${CFLAGS/-O[3-9]/-O2}"	     \
        CXXFLAGS="${CXXFLAGS/-O[3-9]/-O2}"  \
        -f  makefile.unix                   &&
  prepare_install                           &&
  make  PREFIX=/usr                         \
        BINDIR=/usr/games                   \
        -f  makefile.unix                   \
        install

) > $C_FIFO 2>&1
