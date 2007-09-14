WIDELANDS_GGZ=${WIDELANDS_GGZ/y/1}         &&
WIDELANDS_GGZ=${WIDELANDS_GGZ/n/0}         &&
pushd utils                                &&
tar -xf scons-local-*.tar.gz               &&
popd                                       &&
utils/scons.py                             \
       install_prefix=${INSTALL_ROOT}/usr  \
       build=${WIDELANDS_BUILD}            \
       use_ggz=${WIDELANDS_GGZ} || make;
local rc=$?
WIDELANDS_GGZ=${WIDELANDS_GGZ/1/y}         &&
WIDELANDS_GGZ=${WIDELANDS_GGZ/0/n}         &&
return $rc

