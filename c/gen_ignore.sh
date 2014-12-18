#!/bin/bash
# 
find ./ -type f -executable | cut -b 3- >> .gitignore

