#include "../hdr/deps.h"
#include "../hdr/macros.h"
#include "../hdr/menu.h"
#include "../hdr/session.h"

int menu() {
  int finish = 1; // True
  int option = 0;
  char parse[LENGTH_PARSE]; // 16
  
  char sql[LENGTH_SQL];
  strcpy(sql, "SELECT * FROM users;"); // Developer option
  
  while (finish) {
    Clear;
    printf(" 0) Exit\n");
    printf(" 1) Log in\n");
    printf(" 2) Sing up\n");
    //printf(" 3) See all\n");
    printf(" > ");
    scanf("%s", parse);
    option = atoi(parse);
    switch (option) {
      case 0:
        finish = 0;
        break;
      case 1:
        login();
        break;
      case 2:
        singup();
        break;
      case 3:
        //read_DB(show_all, sql, NULL);
        break;
      default:
        printf(" Option Incorrect");
        break;
    }
    sleep(2);
  }
  return 0;
}

/*
int show_all(void *ptr, int argc, char **argv, char **colm){
  for (int i=0; i<argc; i++) {
    printf("%s = %s\n", colm[i], argv[i]);
  }
  printf("\n");
  return 0;
}
*/
