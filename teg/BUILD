(

  if  !  spell_installed  "gtk+"
    then  OPTS="${OPTS}  --disable-client"
  fi

  case  ${SERVER}  in
    N|n)  OPTS="${OPTS}  --disable-server"
          ;;
  esac

  case  ${ROBOT}  in
    N|n)  OPTS="${OPTS}  --disable-robot"
          ;;
  esac

  ./configure  --build=$BUILD        \
               --prefix=${INSTALL_ROOT}/usr         \
               --bindir=${INSTALL_ROOT}/usr/games   \
               --sysconfdir=${INSTALL_ROOT}/etc     \
               --localstatedir=${INSTALL_ROOT}/var  \
               $OPTS                 &&
  make                               &&
  prepare_install                    &&
  make    install

)  >  $C_FIFO  2>&1
