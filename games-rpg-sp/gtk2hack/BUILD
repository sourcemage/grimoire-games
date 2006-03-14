sedit "s:GAMEUID  = games:GAMEUID = root:" Makefile &&
sedit "s:GAMEPERM = 04755:GAMEPERM = 04750:" Makefile &&
sedit "s:FILEPERM = 0644:FILEPERM = 0640:" Makefile &&
sedit "s:EXEPERM  = 0755:EXEPERM = 0750:" Makefile &&
sedit "s:DIRPERM  = 0755:DIRPERM = 0750:" Makefile &&
sedit "s:PREFIX =.*:PREFIX = /usr:" Makefile &&
sedit "s:^GAMEDIR.*$:GAMEDIR = \$(PREFIX)/share/games/gtk2hack:"  Makefile  &&
sedit "s:> \$(SHELLDIR)/\$(GAME):> \$(SHELLDIR)/gtk2hack:" Makefile &&
sedit "s:\-\$(CHOWN) \$(GAMEUID) \$(SHELLDIR)/\$(GAME):\-\$(CHOWN) \$(GAMEUID) \$(SHELLDIR)/gtk2hack:" Makefile &&
sedit "s:\$(CHGRP) \$(GAMEGRP) \$(SHELLDIR)/\$(GAME):\$(CHGRP) \$(GAMEGRP) \$(SHELLDIR)/gtk2hack:" Makefile &&
sedit "s:chmod \$(EXEPERM) \$(SHELLDIR)/\$(GAME):chmod \$(EXEPERM) \$(SHELLDIR)/gtk2hack:" Makefile &&
make LEX=flex
