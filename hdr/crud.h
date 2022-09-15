#pragma once 

#include <sqlite3.h>

int read_DB(int (*)(void *, int, char**, char**), char *, void *);
int update_user(char *, char *, char *);
