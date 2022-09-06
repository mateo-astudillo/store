#ifndef _HEADER_H_
#define _HEADER_H_

#include <bits/types/locale_t.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>


#define CREATE_TABLE_DB "CREATE TABLE \"users\" (\"id\" INTEGER NOT NULL, \"username\" TEXT NOT NULL, \"password\" TEXT NOT NULL, \"balance\" REAL DEFAULT 0, \"name\" TEXT DEFAULT 'name', \"surname\" TEXT DEFAULT 'surname', \"age\" INTEGER DEFAULT 0, PRIMARY KEY(\"id\" AUTOINCREMENT));"
#define FILENAME_CREATE "/home/mateo/Projects/C/Store/data/create.txt"

#define FILENAME_DB "/home/mateo/Projects/C/Store/data/Store.db"
#define LENGTH_SQL 256
#define LENGTH_WORD 32
#define LENGTH_PASS 64

typedef struct {
  unsigned int id;
  char username[LENGTH_WORD];
  char password[LENGTH_PASS];
  float balance;
  char name[LENGTH_WORD];
  char surname[LENGTH_WORD];
  unsigned int age;
} user;

int menu();
int create();
int read();
int login();
int callback(void *ptr, int argc, char *argv[], char *colm[]);

#endif
