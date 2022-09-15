#pragma once

#include "./macros.h"

typedef struct {
  unsigned int id;
  char username[LENGTH_WORD];
  char password[LENGTH_PASS];
  float balance;
  char name[LENGTH_WORD];
  char surname[LENGTH_WORD];
  unsigned int age;
} USER;

int see_balance(char *);
int get_balance(void *, int, char **, char **);

int modify_user(USER *);
