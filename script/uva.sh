#!/bin/sh

if [ -d $UVA_PATH/$1/ ]; then
   
   cd $UVA_PATH/$1
   vim -u $HOME/.vimrc $1.c
else
   cd $UVA_PATH && mkdir $1
   cd  $1
   vim -u $HOME/.vimrc $1.c
fi
