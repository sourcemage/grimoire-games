case  $CUSTOM in
  y|Y)  ${EDITOR:-nano}  makefile.unix  ;;
esac

rm  -f  $SPELL_CONFIG

(

  make  PREFIX=/usr           \
        BINDIR=/usr/games     \
        CFLAGS="$CFLAGS"      \
        CXXFLAGS="$CXXFLAGS"  \
        -f  makefile.unix     &&
  prepare_install             &&
  make  PREFIX=/usr           \
        BINDIR=/usr/games     \
        -f  makefile.unix     \
        install

) > $C_FIFO 2>&1
