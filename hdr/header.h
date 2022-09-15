#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include "./prototypes.h"

#ifdef _WIN32
#include <system>
#define Clear; system("cls");
#else
#include <unistd.h>
#define Clear system("clear")
#endif

#define CREATE_TABLE_DB "CREATE TABLE \"users\" (\"id\" INTEGER NOT NULL, \"username\" TEXT NOT NULL, \"password\" TEXT NOT NULL, \"balance\" REAL DEFAULT 0, \"name\" TEXT DEFAULT 'name', \"surname\" TEXT DEFAULT 'surname', \"age\" INTEGER DEFAULT 0, PRIMARY KEY(\"id\" AUTOINCREMENT));"

#define FILENAME_DB "/home/mateo/Projects/C/Store/data/Store.db"
#define LENGTH_SQL 256
#define LENGTH_WORD 32
#define LENGTH_PASS 64
#define LENGTH_PARSE 16

#endif
