if [[ "$MPGUI" == "gtk+2" ]]; then 
    OPTS="GUI=GTK2 $OPTS"
elif [[ "$MPGUI" == "qt4" ]]; then 
    OPTS="GUI=QT4 $OPTS"  &&
    PATH=${INSTALL_ROOT}/usr/bin/qt4:$PATH
else
    OPTS="GUI=NONE $OPTS"
fi &&

make PREFIX=${INSTALL_ROOT}/usr all $OPTS
