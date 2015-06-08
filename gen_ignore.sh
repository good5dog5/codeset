#!/bin/bash
# 
find ./c/ -type f -executable   | cut -b 3- | sed -e 's/[[]/\\&/g' | sed -e 's/[]]/\\&/g' >> .gitignore
find ./cpp/ -type f -executable | cut -b 3- | sed -e 's/[[]/\\&/g' | sed -e 's/[]]/\\&/g' >> .gitignore

sort -u .gitignore -o .gitignore
