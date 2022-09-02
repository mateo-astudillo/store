#!/bin/sh

rm ex
files="src/main.c src/menu.c"
gcc -o ex $files -lsqlite3
clear
./ex
