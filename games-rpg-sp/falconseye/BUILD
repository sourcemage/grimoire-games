sedit  "s:/usr/local/bin/timidity -idqq %s:/usr/bin/playmus -r 44100 %s:"  \
       win/jtp/gamedata/config/jtp_opts.txt &&

sedit   "s/-O2 -fomit-frame-pointer/$CFLAGS/"     \
        sys/unix/Makefile.src                     &&

sh    sys/unix/setup.sh                           &&

sedit "s:GAMEDIR.*=.*:GAMEDIR = ${INSTALL_ROOT}/usr/share/games/falconseye:" Makefile &&

#sedit "s:GAMEUID.* = root:GAMEUID = root:" Makefile &&
sedit "s:GAMEGRP.* = bin:GAMEGRP = games:" Makefile &&
sedit "s:GAMEPERM.= 04755:GAMEPERM = 04750:g" Makefile &&
sedit "s:FILEPERM.= 0644:FILEPERM = 0640:g" Makefile &&
sedit "s:EXEPERM.*= 0755:EXEPERM = 0750:g" Makefile &&
sedit "s:DIRPERM.*= 0755:DIRPERM = 0750:g" Makefile &&

sedit "s:GAMEPERM.= 02755:GAMEPERM = 02750:g" Makefile &&
sedit "s:FILEPERM.= 0664:FILEPERM = 0660:g" Makefile &&
sedit "s:EXEPERM.*= 0755:EXEPERM = 0750:g" Makefile &&
sedit "s:DIRPERM.*= 0775:DIRPERM = 0770:g" Makefile &&

sedit "s:PREFIX =.*:PREFIX = /usr:" Makefile &&

sedit "s:cp src/\$(GAME) \$(GAMEDIR):cp src/nethack \$(GAMEDIR):" Makefile &&

sedit "s:> \$(SHELLDIR)/\$(GAME):> \$(SHELLDIR)/falconseye:" Makefile &&

sedit "s:CHOWN =.*:CHOWN = chown:" Makefile &&
sedit "s:CHGRP =.*:CHGRP = chgrp:" Makefile &&

sedit "s:\-\$(CHOWN) \$(GAMEUID) \$(SHELLDIR)/\$(GAME):\-\$(CHOWN) \$(GAMEUID) \$(SHELLDIR)/falconseye:" Makefile &&
sedit "s:\$(CHGRP) \$(GAMEGRP) \$(SHELLDIR)/\$(GAME):\$(CHGRP) \$(GAMEGRP) \$(SHELLDIR)/falconseye:" Makefile &&
sedit "s:chmod \$(EXEPERM) \$(SHELLDIR)/\$(GAME):chmod \$(EXEPERM) \$(SHELLDIR)/falconseye:" Makefile &&
make_single                                       &&
make  LEX=flex all
