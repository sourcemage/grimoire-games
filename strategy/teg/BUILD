(


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
  cp -f ${INSTALL_ROOT}/etc/ggz.modules ${INSTALL_ROOT}/etc/ggz.modules.teg &&
  prepare_install                    &&
  if [ ! -f ${INSTALL_ROOT}/etc/ggz.modules ];
  then cp ${INSTALL_ROOT}/etc/ggz.modules.teg ${INSTALL_ROOT}/etc/ggz.modules 
  fi                                 &&
  make    install

)  >  $C_FIFO  2>&1
