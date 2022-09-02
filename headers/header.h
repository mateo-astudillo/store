#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

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

#endif
