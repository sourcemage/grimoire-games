(

  I_DIR=/usr/share/${SPELL}                  &&
  ./configure  --build=$BUILD                \
               --prefix=/usr                 \
               --bindir=/usr/games           \
               --sysconfdir=/etc             \
               --localstatedir=/var          \
               $OPTS                         &&
  make                                       &&
  prepare_install                            &&
  make    install                            &&
  chown  -R  games.games  ${I_DIR}           &&
  mkdir  -p  ${I_DIR}/levels                 &&
  install  -m  755  -o  games  -g  games     \
    data/levels/*.png  ${I_DIR}/levels       &&
  install  -m  755  -o  games  -g  games     \
    data/levels/README  ${I_DIR}/levels

)  >  $C_FIFO  2>&1
