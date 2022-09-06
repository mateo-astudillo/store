#!/bin/sh

rm ex
files="src/main.c src/menu.c src/crud/create.c src/crud/read.c src/session/login.c"
gcc -o ex $files -lsqlite3
clear
./ex
