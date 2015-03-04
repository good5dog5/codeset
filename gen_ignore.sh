#!/bin/bash
# 
find ./c/ -type f -executable | cut -b 3- >> .gitignore
find ./cpp/ -type f -executable | cut -b 3- >> .gitignore

