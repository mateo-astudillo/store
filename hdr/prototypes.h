#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_

#include "header.h"

// Menu
int menu();
int show_all(void *, int, char**, char**);
int menu_logged(USER *);

// Crud
int create_user(char *);
int read_DB();
int update_user(char *, char *, char *);

// Init
int create_DB();

// Session
int login();
int get_pass(void *, int , char **, char **);

// User
int see_balance(char *);
int get_balance(void *, int , char **, char **);
int modify_user(USER *);

#endif // !_PROTOTYPES_H_
