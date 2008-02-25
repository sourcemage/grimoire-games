#!/bin/sh

# Copied from the egoboo package.
# exit on any error
set -e

if [ ! -d ~/.glob2 ]; then
  mkdir ~/.glob2
  echo "coping files from /usr/share/games/glob2 to ~/.glob2"
  cp -au /usr/share/games/glob2/* ~/.glob2
fi

if [ ! -d ~/.glob2/data ]; then
  cp -au /usr/share/games/glob2/data ~/.glob2/data
fi

cd ~/.glob2

exec /usr/games/glob2-bin "$@"
