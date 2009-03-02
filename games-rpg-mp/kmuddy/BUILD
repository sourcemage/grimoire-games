if [[ -f /etc/profile.d/qt.sh ]]; then
  . /etc/profile.d/qt.sh
fi  &&

if [[ "${SOUND}" == "none" ]]
then
  OPTS="--disable-sound  \
        --without-arts   \
        --without-sdl    \
        $OPTS"
fi  &&

OPTS="$OPTS --build=${BUILD}"
#If these switches are used, they _may_ stop distcc and ccache from working
# for some spells (bug 3798)
#  We could write wrappers for all of the possible binaries
[[ $CROSS_INSTALL == on ]] && OPTS="$OPTS --host=${HOST}"

./configure --prefix=${INSTALL_ROOT}/usr                 \
        --sysconfdir=${INSTALL_ROOT}/etc                 \
     --localstatedir=${INSTALL_ROOT}/var                 \
            --mandir=${INSTALL_ROOT}/usr/share/man       \
           --infodir=${INSTALL_ROOT}/usr/share/info      \
          --includedir=${INSTALL_ROOT}/usr/include/kde3  \
                     $OPTS                               &&
make
