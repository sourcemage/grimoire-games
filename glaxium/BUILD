(

  # Updated OpenGL headers from
  # http://oss.sgi.com/projects/ogl-sample/registry/
  if  [  !  -d  /usr/include/GL/glaxium-bak  ] ;  then
    cd  /usr/include/GL      &&
    mkdir  glaxium-bak       &&
    mv  glext.h glaxium-bak
  fi
  install  -m  644  ${SCRIPT_DIRECTORY}/*.h  /usr/include/GL  &&

  aclocal                                                     &&
  autoconf                                                    &&
  ./configure  --prefix=/usr                                  \
               --bindir=/usr/games                            \
               --mandir=/usr/share/man                        &&
  make                                                        &&
  prepare_install                                             &&
  # not automatic
  install  --directory  /usr/games                            &&
  make    install

)  >  $C_FIFO  2>&1
