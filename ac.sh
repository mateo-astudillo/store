#!/bin/sh

rm ex
files="src/main.c src/menu.c src/menu-logged.c src/crud/create.c \
  src/crud/read.c src/session/login.c src/user/see-balance.c"
gcc -o ex $files -lsqlite3
