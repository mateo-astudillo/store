#include "../headers/header.h"

int menu() {
  int option = 0;
  char parse[LENGTH_PARSE];
  char sql[LENGTH_SQL];
  strcpy(sql, "SELECT * FROM users;");
  Clear;
  printf(" 0) Exit\n");
  printf(" 1) Log in\n");
  printf(" 2) Sing up\n");
  printf(" 3) See all\n");
  printf(" > ");
  scanf("%s", parse);
  if (atoi(parse)) {
    option = atoi(parse);
  } else {
    printf("\n Thanks!\n");
    return 1;
  }
  switch (option) {
    case 1:
      login();
      break;
    case 2:
      //singup();
      break;
    case 3:
      read_DB(show_all, sql, NULL);
      sleep(5);
      break;
    default:
      printf(" Option Incorrect");
      break;
  }
  return 0;
}

int show_all(void *ptr, int argc, char **argv, char **colm){
  for (int i=0; i<argc; i++) {
    printf("%s = %s\n", colm[i], argv[i]);
  }
  printf("\n");
  return 0;
}
