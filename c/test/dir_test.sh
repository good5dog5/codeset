#!/bin/bash
PYV=`python -c "import sys;t='{v[0]}.{v[1]}'.format(v=list(sys.version_info[:2]));sys.stdout.write(t)";`

echo "python$PYV"

if [ -e ~/.local/lib/python$PYV/ ]; then
   echo "Exist"
fi





