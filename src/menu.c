#include "../headers/header.h"
#include <stdlib.h>

int menu() {
  int option = 0;
  char parse[LENGTH_PARSE];
  Clear
  printf(" 0) Exit\n");
  printf(" 1) Log in\n");
  printf(" 2) Sing up\n");
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
    default:
      printf(" Option Incorrect");
      break;
  }
  return 0;
}
