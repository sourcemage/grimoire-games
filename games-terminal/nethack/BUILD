sh  sys/unix/setup.sh  &&

# make corrections
if  [  "$NETHACK_GUI"  ==  "tty"  ];  then
  echo "BUILDING for TTY console" 

elif  [  "$NETHACK_GUI"  ==  "x11"  ];  then
  echo  "BUILDING for X11"  &&
  # just X11 graphics, if you want others, define them here.
  sedit  "s:/\* #define X11_GRAPHICS \*/:#define X11_GRAPHICS:"   \
         include/config.h                                           &&
  sedit  's:WINSRC = \$(WINTTYSRC):& \$(WINX11SRC):'  src/Makefile  &&
  sedit  's:WINOBJ = \$(WINTTYOBJ):& \$(WINX11OBJ):'  src/Makefile  &&
  sedit  's:WINLIB = \$(WINTTYLIB):& \$(WINX11LIB):'  src/Makefile  &&

  # use Xpm for effects
  sedit  "s/\/\* # define USE_XPM \*\//# define USE_XPM/"  include/config.h  &&
  sedit  "s/^WINX11LIB = -lXaw -lXmu -lXext -lXt -lX11/& -L\/usr\/X11R6\/lib\/ -lXpm /"  src/Makefile  &&
  sedit  "s/^VARDATND =/& x11tiles NetHack.ad pet_mark.xbm rip.xpm/g"        \
         Makefile

elif  [  "$NETHACK_GUI"  ==  "qt-x11"  ];  then 
  echo "BUILDING for QT"                                         &&
  sedit  "s/\/\* #define QT_GRAPHICS \*\//#define QT_GRAPHICS/"  \
         include/config.h                                        &&

  # use Xpm for effects
  sedit "s:/\* # define USE_XPM \*/:# define USE_XPM:"  include/config.h  &&
  sedit "s:#LD=g++:LD=g++:g" src/Makefile                                   &&
  sedit 's:WINSRC = \$(WINTTYSRC):& \$(WINQTSRC):'  src/Makefile            &&
  sedit 's:WINOBJ = \$(WINTTYOBJ):& \$(WINQTOBJ):'  src/Makefile            &&
  sedit 's:WINLIB = \$(WINTTYLIB):& \$(WINQTLIB):'  src/Makefile            &&
  export QTDIR=/usr                                                         &&
  sedit "s:-I\$(QTDIR)/include:-I\$(QTDIR)/include/qt:g" src/Makefile    &&
  sedit "s:^VARDATND =:& x11tiles NetHack.ad pet_mark.xbm rip.xpm nhsplash.xpm:" Makefile 

elif  [  "$NETHACK_GUI"  ==  "gnome"  ];  then
  echo "BUILDING for GNOME"                                                  &&
  sedit  "s:/\* #define GNOME_GRAPHICS \*/:#define GNOME_GRAPHICS:"        \
         include/config.h                                                    &&
  # use Xpm for effects
  sedit  "s:/\* # define USE_XPM \*/:# define USE_XPM:"  include/config.h  &&
  sedit  's:WINSRC = \$(WINTTYSRC):& \$(WINGNOMESRC):'  src/Makefile         &&
  sedit  's:WINOBJ = \$(WINTTYOBJ):& \$(WINGNOMEOBJ):'  src/Makefile         &&
  sedit  's:WINLIB = \$(WINTTYLIB):& \$(WINGNOMELIB):'  src/Makefile         &&
  sedit  "s:GNOMEINC=-I/usr/lib/glib/include -I/usr/lib/gnome-libs/include -I../win/gnome:&-I/usr/include/gnome-1.0 -I/usr/include/gtk-1.2 -I/usr/include/glib-1.2 -I/usr/lib/gnome-libs/include:" src/Makefile  &&
  sedit "s:^VARDATND =:& x11tiles pet_mark.xbm NetHack.ad rip.xpm mapbg.xpm:" Makefile 
fi  &&

# you want to use gzip here
sedit  "s:/usr/bin/compress:/bin/gzip:"  include/config.h             &&
sedit  "s:\.Z:\.gz:"  include/config.h                                      &&
sedit  "s:/\* #define DLB \*/:#define DLB:"  include/config.h            &&
sedit  "s:/\* #define LINUX \*/:#define LINUX:"  include/unixconf.h      &&
sedit  "s:/\* #define TIMED_DELAY \*/:#define TIMED_DELAY:"              \
       include/unixconf.h                                                  &&
sedit  "s:/usr/games/lib/nethackdir:/usr/share/games/nethack:"  \
       include/config.h                                                    &&

# kind of tricky, we want the first 2 remarked out before we define the
# ones we use so we those don't get remarked out. $ marks end of line.
# the special character (&) repeats the search string.
sedit  "s:^CFLAGS = -O -I\.\./include$:# &:"  src/Makefile  &&
sedit  "s:^LFLAGS =$:# &:"  src/Makefile                       &&
sedit  "s:# CFLAGS = -O2 -fomit-frame-pointer -I\.\./include:CFLAGS = $CFLAGS -fomit-frame-pointer -I\.\./include:"  src/Makefile &&
sedit  "s:# LFLAGS = -L/usr/X11R6/lib:LFLAGS = -L/usr/X11R6/lib:" src/Makefile  &&

# linux uses ncurses
sedit  "s:WINTTYLIB = -ltermlib:WINTTYLIB = -lncurses:"  src/Makefile  &&

# we probably don't need to assign the shell again.
sedit  "s:# SHELL = /bin/sh:SHELL = /bin/sh:"  util/Makefile       &&
sedit  "s:# CFLAGS = -O2 -fomit-frame-pointer -I\.\./include:CFLAGS = $CFLAGS -fomit-frame-pointer -I\.\./include:"  util/Makefile &&
sedit  "s:# LFLAGS = -L/usr/X11R6/lib:LFLAGS = -L/usr/X11R6/lib:" util/Makefile &&
sedit  "s:= bin:= games:" Makefile                                     &&
sedit  "s:PREFIX	 = /usr:PREFIX =/usr/share:" Makefile       &&
sedit  "s:/usr/games/lib/nethackdir:/usr/share/games/nethack:" Makefile    &&
sedit  "s:lib/\$(GAME):\$(GAME):" Makefile                            &&

# here's that shell assign again, better safe than sorry.
sedit "s:# SHELL = /bin/sh:SHELL = /bin/sh:"  Makefile             &&
sedit "s:		> \$(SHELLDIR)/\$(GAME):		> ${INSTALL_ROOT}/usr/games/\$(GAME):" Makefile &&
sedit "s:GAMEDIR  =.*:GAMEDIR = \$(PREFIX)/games/nethack:" Makefile &&

# Permissions
sedit "s:GAMEUID  = games:GAMEUID = root:" Makefile &&
sedit "s:GAMEPERM = 04755:GAMEPERM = 04750:" Makefile &&
sedit "s:FILEPERM = 0644:FILEPERM = 0640:" Makefile &&
sedit "s:EXEPERM  = 0755:EXEPERM = 0750:" Makefile &&
sedit "s:DIRPERM  = 0755:DIRPERM = 0750:" Makefile &&

# Some paths
sedit "s:HACKDIR=/usr/games/lib/nethackdir:HACKDIR=/usr/share/games/nethack:" sys/unix/nethack.sh &&

make_single  &&
make LEX=flex all
