#include "../../hdr/deps.h"
#include "../../hdr/macros.h"
#include "../../hdr/user.h"
#include "../../hdr/crud.h"

int modify_user(USER *u){
  int option = 0;
  char parse[LENGTH_PARSE];
  char value[LENGTH_WORD];
  Clear;
  printf(" 0) Cancel\n");
  printf(" 1) Username\n");
  printf(" 2) Password\n");
  printf(" 3) Name\n");
  printf(" 4) Surname\n");
  printf(" 5) Age\n");
  printf(" > ");
  scanf("%s", parse);
  option = atoi(parse);
  switch (option) {
    case 0:
      break;
    case 1:
      scanf("%s", value);
      update_user("username", value, u->username);
      break;
    case 2:
      scanf("%s", value);
      update_user("password", value, u->username);
      break;
    case 3:
      printf("New name: ");
      scanf("%s", value);
      update_user("name", value, u->username);
      break;
    case 4:
      printf("New surname: ");
      scanf("%s", value);
      update_user("surname", value, u->username);
      break;
    case 5:
      printf("New age: ");
      scanf("%s", value);
      update_user("age", value, u->username);
      break;
    default:
      printf(" Option Incorrect\n");
      break;
  }
  sleep(1);
  return 0;
}
