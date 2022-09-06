#include "../../headers/header.h"

int login(){
  user u;
  char *sql = malloc(LENGTH_SQL);
  char *pass = malloc(LENGTH_PASS);

  printf(" Insert username: \n > ");
  scanf("%s", u.username);
  printf(" Insert password: \n > ");
  scanf("%s", u.password);

  sprintf(sql, "SELECT password FROM users WHERE username='%s';", u.username);

  read(callback, sql, pass);

  if (!strcmp(pass, u.password)) {
    printf(" Logged\n");
  } else {
    printf(" Not Logged\n");
  }

  free(sql);
  free(pass);
  return 0;
}

int callback(void *ptr, int argc, char *argv[], char *colm[]){
  strcpy(ptr, argv[0]);
  return 0;
}
