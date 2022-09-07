#include "../headers/header.h"

int menu_logged(USER *u){
  int option = 0;
  char parse[LENGTH_PARSE];
  Clear
  printf(" 0) Exit\n");
  printf(" 1) Shop\n");
  printf(" 2) Sell\n");
  printf(" 3) See my products\n");
  printf(" 4) See my balance\n");
  printf(" 5) Modify user\n");
  printf(" > ");
  scanf("%s", parse);
  if (atoi(parse)) {
    option = atoi(parse);
  } else {
    return 1;
  }
  switch (option) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      see_balance(u->username);
      break;
    case 5:
      break;
    default:
      printf(" Option Incorrect\n");
      break;
  }
  return 0;
}
