(

  sedit  "s:\-O2:${CFLAGS}:"  Makefile                           &&
  sedit  's:/usr/local:/usr:g'  Makefile                         &&
  sedit  's:CONFIG_DIR = /usr/etc:CONFIG_DIR = /etc:'  Makefile  &&
  sedit  's:bin:games:g'  Makefile                               &&

  case  ${OSSSOUND}  in
    y|Y)  sedit  's:\#SOUND_DEFS = -DOSS_SOUND:SOUND_DEFS = -DOSS_SOUND:'  Makefile  &&
          sedit  's:\#SOUND_DEV = /dev/dsp:SOUND_DEV = /dev/dsp:'  Makefile
          ;;
  esac

  make                               &&
  prepare_install                    &&
  make    install

)  >  $C_FIFO  2>&1
