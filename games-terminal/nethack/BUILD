(
#I inherited this BUILD. Please know that it took me hours to understand it too.
#I wish there were some "simpler" way of doing this
# I added the QT TTY and GNOME builds and it took me hours of work
#hgg(20030902)
# make makefiles unix
sh sys/unix/setup.sh  &&
# make corrections
if [ "$TTY" = "yes" ] ; then
echo "BUILDING for TTY console" 
elif [ "$X11" = "yes" ];then
echo "BUILDING for X11"                                                              &&
     # just X11 graphics, if you want others, define them here.
    sedit "s/\/\* #define X11_GRAPHICS \*\//#define X11_GRAPHICS/"  include/config.h &&
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINX11SRC)/'  src/Makefile                  &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINX11OBJ)/'  src/Makefile                  &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINX11LIB)/'  src/Makefile                  &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    sedit "s/^WINX11LIB = -lXaw -lXmu -lXext -lXt -lX11/& -L\/usr\/X11R6\/lib\/ -lXpm /"  src/Makefile &&
    sedit "s/^VARDATND =/& x11tiles NetHack.ad pet_mark.xbm rip.xpm/g" Makefile 
elif [ "$QT" = "yes" ]; then 
echo "BUILDING for QT"                                                               &&
    sedit "s/\/\* #define QT_GRAPHICS \*\//#define QT_GRAPHICS/"  include/config.h   &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    sedit "s/#LD=g++/LD=g++/g" src/Makefile                                          &&
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINQTSRC)/'  src/Makefile                   &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINQTOBJ)/'  src/Makefile                   &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINQTLIB)/'  src/Makefile                   &&
    export QTDIR=/usr                                                                &&
    sedit "s/-I\$(QTDIR)\/include/-I\$(QTDIR)\/include\/qt/g" src/Makefile           &&
    sedit "s/^VARDATND =/& x11tiles NetHack.ad pet_mark.xbm rip.xpm nhsplash.xpm/" Makefile 
elif [ "$GTK" = "yes" ]; then
echo "BUILDING for GNOME"                                                            &&
    sedit "s/\/\* #define GNOME_GRAPHICS \*\//#define GNOME_GRAPHICS/"  include/config.h   &&
     # use Xpm for effects
    sedit "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h         &&
    sedit 's/WINSRC = \$(WINTTYSRC)/& \$(WINGNOMESRC)/'  src/Makefile                &&
    sedit 's/WINOBJ = \$(WINTTYOBJ)/& \$(WINGNOMEOBJ)/'  src/Makefile                &&
    sedit 's/WINLIB = \$(WINTTYLIB)/& \$(WINGNOMELIB)/'  src/Makefile                &&
    sedit "s/GNOMEINC=-I\/usr\/lib\/glib\/include -I\/usr\/lib\/gnome-libs\/include -I..\/win\/gnome/& \
\-I\/usr\/include\/gnome-1.0 -I\/usr\/include\/gtk-1.2 -I\/usr\/include\/glib-1.2 -I\/usr\/lib\/gnome-libs\/include/" src/Makefile  &&
    sedit "s/^VARDATND =/& x11tiles pet_mark.xbm NetHack.ad rip.xpm mapbg.xpm/" Makefile 
fi                                                                                   &&
# you want to use gzip here
sedit "s/\/usr\/bin\/compress/\/bin\/gzip/"  include/config.h                        &&
sedit "s/\.Z/.gz/"  include/config.h                                                 && 
sedit "s/\/\* #define DLB \*\//#define DLB/"  include/config.h                       && 
sedit "s/\/\* #define LINUX \*\//#define LINUX/"  include/unixconf.h                 &&
sedit "s/\/\* #define TIMED_DELAY \*\//#define TIMED_DELAY/" include/unixconf.h      && 
sedit "s/\/usr\/games\/lib\/nethackdir/\/usr\/share\/games\/nethackdir/" include/config.h  &&

# kind of tricky, we want the first 2 remarked out before we define the
# ones we use so we those don't get remarked out. $ marks end of line.
# the special character (&) repeats the search string.
sedit "s/^CFLAGS = -O -I\.\.\/include$/# &/" src/Makefile                            &&
sedit "s/^LFLAGS =$/# &/"  src/Makefile                                              && 
sedit "s/# CFLAGS = -O2 -fomit-frame-pointer -I\.\.\/include/CFLAGS = $CFLAGS -fomit-frame-pointer -I..\/include/"  src/Makefile &&
sedit "s/# LFLAGS = -L\/usr\/X11R6\/lib/LFLAGS = -L\/usr\/X11R6\/lib/" src/Makefile  &&
# linux uses ncurses
sedit "s/WINTTYLIB = -ltermlib/WINTTYLIB = -lncurses/"  src/Makefile                 &&
# we probably don't need to assign the shell again.
sedit "s/# SHELL = \/bin\/sh/SHELL = \/bin\/sh/"  util/Makefile                      && 
sedit "s/# CFLAGS = -O2 -fomit-frame-pointer -I\.\.\/include/CFLAGS = $CFLAGS -fomit-frame-pointer -I..\/include/"  util/Makefile &&
sedit "s/# LFLAGS = -L\/usr\/X11R6\/lib/LFLAGS = -L\/usr\/X11R6\/lib/" util/Makefile &&
sedit "s/= bin/= games/" Makefile                                                    &&
sedit "s/PREFIX	 = \/usr/PREFIX =\/usr\/share/" Makefile                             &&
sedit "s/\/usr\/games\/lib\/nethackdir/\/usr\/share\/games\/nethackdir/" Makefile    &&
sedit "s/lib\/\$(GAME)/\$(GAME)/" Makefile                                           &&
sedit "s/games\/lib/share\/games/" sys/unix/nethack.sh                               &&

# here's that shell assign again, better safe than sorry.
sedit "s/# SHELL = \/bin\/sh/SHELL = \/bin\/sh/"  Makefile                           &&
make  all                                                                            &&
prepare_install                                                                      &&
mkdir -p ${INSTALL_ROOT}/usr/games                                                   && 
make install                                                                         &&
# this whole mess takes care of docs, fonts and stuff
# check POST_INSTALL for more info. 
cd doc                                                                               &&
make distrib                                                                         &&
cp *.txt /usr/share/games/nethackdir                                                 &&
make manpages                                                                        &&

if  [  !  -d  /usr/games  ] && [ "$BUILT" = "yes" ]
  then  install  -d  -m  755  -g  bin  /usr/games
fi                                                                                   &&

ln -s /usr/share/games/nethack /usr/games/nethack                                    &&
gamedir=${INSTALL_ROOT}/usr/share/games/nethackdir                                   &&


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
  cp $gamedir/*.pcf  /usr/X11R6/lib/X11/fonts/misc/   &&
  cd /usr/X11R6/lib/X11/fonts/misc                    &&
  mkfontdir
fi                                                    &&

  chown  root.games  /usr/share/games/nethack*  -R    &&
  chmod  g+w         /usr/share/games/nethackdir  -R

) > $C_FIFO 2>&1
