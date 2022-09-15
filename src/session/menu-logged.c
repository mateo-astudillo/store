#include "../../hdr/deps.h"
#include "../../hdr/macros.h"
#include "../../hdr/user.h"
#include "../../hdr/session.h"

int menu_logged(USER *u) {
  int finish = 1; // True
  int option = 0;
  char parse[LENGTH_PARSE];
  while (finish) {
    Clear;
    printf(" 0) Log out\n");
    printf(" 1) Shop\n");
    printf(" 2) Sell\n");
    printf(" 3) See my products\n");
    printf(" 4) See my balance\n");
    printf(" 5) Modify user\n");
    printf(" > ");
    scanf("%s", parse);
    option = atoi(parse);
    switch (option) {
      case 0:
        finish = 0;
        break;
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
        modify_user(u);
        break;
      default:
        printf(" Option Incorrect\n");
        break;
    }
    sleep(1);
  }
  return 0;
}

