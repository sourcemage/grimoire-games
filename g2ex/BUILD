(

  for  SEDIT_FILE  in  `find  .  -type  f`;  do
    grep  -qI  /usr/local  $SEDIT_FILE	&&
    sedit  's#/usr/local#/usr/share#'  $SEDIT_FILE;
  done								&&
  mkdir  -p  /usr/games						&&
  sedit  's#/usr/bin/g2ex#/usr/games/g2ex#'  makefile		&&
  make								&&
  prepare_install						&&
  make    install

) > $C_FIFO 2>&1
