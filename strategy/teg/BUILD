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

#  if [ -f ${INSTALL_ROOT}/etc/ggz.modules ];
#  then
#  echo "1!"
#  cp -vf ${INSTALL_ROOT}/etc/ggz.modules ${INSTALL_ROOT}/etc/ggz.modules.teg
#  fi  &&

  prepare_install                    &&
  
#  if [ ! -f ${INSTALL_ROOT}/etc/ggz.modules ];
#  then
#  echo "2!"
#  cp -v ${INSTALL_ROOT}/etc/ggz.modules.teg ${INSTALL_ROOT}/etc/ggz.modules 
#  fi                                 &&
  
  make install

)  >  $C_FIFO  2>&1
