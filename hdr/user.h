#ifndef _USER_H_
#define _USER_H_

#include "./header.h"

typedef struct {
  unsigned int id;
  char username[LENGTH_WORD];
  char password[LENGTH_PASS];
  float balance;
  char name[LENGTH_WORD];
  char surname[LENGTH_WORD];
  unsigned int age;
} USER;

#endif // !_USER_H_
