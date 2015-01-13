#!/bin/sh
printError() {
   echo -en '\E[37;41m'"\033[1m$@ \-33[0m" >&2
}

printError "Error"
