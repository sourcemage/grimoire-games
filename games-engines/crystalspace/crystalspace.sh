#!/bin/bash 
# First check if this variable is already set 
# then if not set, check it (maybe), then set it 
#
# Set CRYSTAL for packages which need
# the CrystalSpace libs (e.g. Crystal Entity Layer (CEL))
#

if  [  -z  "$CRYSTAL"  ];  then 
  CRYSTAL=/usr/share/crystalspace
fi  &&

if  [  -z  "$CS_CONFIGDIR"  ];  then 
  CS_CONFIGDIR=/etc/crystalspace
fi  &&

if  [  -z  "$CS_DATADIR"  ];  then 
  CS_DATADIR=/usr/share/crystalspace
fi  &&

if  [  -z  "$CS_LIBDIR"  ];  then 
  CS_LIBDIR=/usr/lib/crystalspace
fi  &&

export  CRYSTAL		&&
export  CS_CONFIGDIR	&&
export  CS_DATADIR	&&
export  CS_LIBDIR
