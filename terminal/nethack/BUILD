(
# make makefiles unix
sh sys/unix/setup.sh  &&
# make corrections
# (/) and (*) are special characters that need to be escaped with a \
if [ "$TTY" = "yes" ] ; then
echo "BUILDING for TTY console"
elif [ "$X11" = "yes" ];then
     # just X11 graphics, if you want others, define them here. You will
     # need to figure out the depends for that. k.i.s.s.
    sedit "s/\/\* #define X11_GRAPHICS \*\//#define X11_GRAPHICS/"  include/config.h &&
     # if you wanted to add support for gnome, qt or kde graphics this is
     # the spot to do it. Don't forget to define them in config.h if you do.
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINX11SRC)/'  src/Makefile                  &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINX11OBJ)/'  src/Makefile                  &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINX11LIB)/'  src/Makefile                  &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    # the special character (^) matches the string from the begining of a line.
    # this adds Xpm support we defined above. 
    sedit "s/^WINX11LIB = -lXaw -lXmu -lXext -lXt -lX11/& -lXpm /"  src/Makefile     
elif [ "$QT" = "yes" ]; then 
    sedit "s/\/\* #define QT_GRAPHICS \*\//#define QT_GRAPHICS/"  include/config.h   &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    sedit "s/#LD=g++/LD=g++/g" src/Makefile                                          &&
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINQTSRC)/'  src/Makefile                   &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINQTOBJ)/'  src/Makefile                   &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINQTLIB)/'  src/Makefile                   &&
    export QTDIR=/usr                                                                &&
#    export CFLAGS="$CFLAGS -I/usr/include/qt"
    sedit "s/-I\$(QTDIR)\/include/-I\$(QTDIR)\/include\/qt/g" src/Makefile
elif [ "$GTK" = "yes" ]; then   
    sedit "s/\/\* #define GNOME_GRAPHICS \*\//#define GNOME_GRAPHICS/"  include/config.h   &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINGNOMESRC)/'  src/Makefile                &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINGNOMEOBJ)/'  src/Makefile                &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINGNOMELIB)/'  src/Makefile                  
fi
# you want to use gzip here
sedit "s/\/usr\/bin\/compress/\/bin\/gzip/"  include/config.h
#  a period (.)is a special character that needs to be escaped 
# in the search field only.
# change extension to match gzip
sedit "s/\.Z/.gz/"  include/config.h
sedit "s/\/\* #define DLB \*\//#define DLB/"  include/config.h
sedit "s/\/\* #define LINUX \*\//#define LINUX/"  include/unixconf.h
sedit "s/\/\* #define TIMED_DELAY \*\//#define TIMED_DELAY/" include/unixconf.h
sedit "s/\/usr\/games\/lib\/nethackdir/\/usr\/share\/games\/nethackdir/" include/config.h

# kind of tricky, we want the first 2 remarked out before we define the
# ones we use so we those don't get remarked out. $ marks end of line.
# the special character (&) repeats the search string.
sedit "s/^CFLAGS = -O -I\.\.\/include$/# &/" src/Makefile
sedit "s/^LFLAGS =$/# &/"  src/Makefile
sedit "s/# CFLAGS = -O2 -fomit-frame-pointer -I\.\.\/include/CFLAGS = -O2 -fomit-frame-pointer -I..\/include/"  src/Makefile
sedit "s/# LFLAGS = -L\/usr\/X11R6\/lib/LFLAGS = -L\/usr\/X11R6\/lib/" src/Makefile
# ($) is a special character that needs to be escaped.
# linux uses ncurses
sedit "s/WINTTYLIB = -ltermlib/WINTTYLIB = -lncurses/"  src/Makefile
# we probably don't need to assign the shell again.
sedit "s/# SHELL = \/bin\/sh/SHELL = \/bin\/sh/"  util/Makefile
sedit "s/# CFLAGS = -O2 -fomit-frame-pointer -I\.\.\/include/CFLAGS = -O2 -fomit-frame-pointer -I..\/include/"  util/Makefile
sedit "s/# LFLAGS = -L\/usr\/X11R6\/lib/LFLAGS = -L\/usr\/X11R6\/lib/"  util/Makefile
sedit "s/^VARDATND =/& x11tiles pet_mark.xbm rip.xpm/"  Makefile
sedit "s/= bin/= games/" Makefile
sedit "s/PREFIX	 = \/usr/PREFIX =\/usr\/share/" Makefile
sedit "s/\/usr\/games\/lib\/nethackdir/\/usr\/share\/games\/nethackdir/" Makefile
sedit "s/lib\/\$(GAME)/\$(GAME)/" Makefile
sedit "s/games\/lib/share\/games/" sys/unix/nethack.sh

# here's that shell assign again, better safe than sorry.
sedit "s/# SHELL = \/bin\/sh/SHELL = \/bin\/sh/"  Makefile  &&
make  all                                   &&
prepare_install                             &&
make install                                &&
# this whole mess takes care of docs, fonts and stuff
# check POST_INSTALL for more info. 
cd doc                                      &&
make distrib                                &&
cp *.txt /usr/share/games/nethackdir        &&
make manpages                               &&

#merged from POST_INSTALL
# put nethack in $PATH 
if  [  !  -d  /usr/games  ]
  then  install  -d  -m  755  -g  bin  /usr/games
fi                                          &&
ln -s /usr/share/games/nethack /usr/games/nethack   &&

#more X11 stuff

gamedir=${INSTALL_ROOT}/usr/share/games/nethackdir  &&


if [ "$X11" = "yes" ];then
  cd ../win/X11                               &&
  cp nh_icon.xpm /usr/share/games/nethackdir  &&
  bdftopcf -o nh10.pcf nh10.bdf               &&
  bdftopcf -o ibm.pcf ibm.bdf                 &&
  cp *.pcf /usr/share/games/nethackdir        &&
  cp NetHack.ad /usr/share/games/nethackdir   &&
  cp nethack.rc /usr/share/games/nethackdir   &&
  cp Install.X11 /usr/share/games/nethackdir  &&
  case $COPY_FILES in
  y|Y)
  for i in `cat /etc/group | grep '^games:' | cut -d: -f4 | tr ',' ' '`; do
      h=`cat /etc/passwd | grep ^$i: | cut -d: -f6`
        if [ -e "$h/.nethackrc" ]; then
            echo "$i has a .nethackrc already";
        else
            cp $gamedir/nethack.rc $h/.nethackrc;
            chown $i:users $h/.nethackrc;
        fi
        if [ -e "$h/.Xdefaults" ]; then
            echo "$i may need to add the .NetHack.ad to .Xdefaults";
        else
            cp $gamedir/NetHack.ad $h/.Xdefaults;
            chown $i:users $h/.Xdefaults
        fi
  # add to /etc/skel future users can play too!
  cp $gamedir/nethack.rc /etc/skel/.nethackrc;    
  cp $gamedir/NetHack.ad /etc/skel/.Xdefaults
  done
  ;;
	*) true ;;
  esac

  # put fonts where they belong
  cp $gamedir/*.pcf  /usr/X11R6/lib/X11/fonts/misc/ &&
  cd /usr/X11R6/lib/X11/fonts/misc                  &&
  mkfontdir
fi
) > $C_FIFO 2>&1







