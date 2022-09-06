#include "../headers/header.h"

#define LENGTH_PARSE 16
int menu() {
  int option = 0;
  char parse[LENGTH_PARSE];
  printf("\n");
  printf(" 0) Exit\n");
  printf(" 1) Log in\n");
  printf(" 2) Sing up\n");
  printf(" 3) Delete account\n");
  printf(" > ");
  scanf("%s", parse);
  if (atoi(parse)) {
    option = atoi(parse);
  } else {
    printf(" Thanks!\n");
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
      //erase();
      break;
    default:
      printf(" Option Incorrect");
      break;
  }
  return 0;
}
