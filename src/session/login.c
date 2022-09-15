#include "../../hdr/deps.h"
#include "../../hdr/session.h"
#include "../../hdr/crud.h"

int login(){
  USER u;
  char *sql = malloc(LENGTH_SQL);
  char *pass = malloc(LENGTH_PASS);
  int l = 0; // Logged
  
  printf(" Insert username: \n > ");
  scanf("%s", u.username);
  printf(" Insert password: \n > ");
  scanf("%s", u.password);

  sprintf(sql, "SELECT password FROM users WHERE username='%s';", u.username);

  read_DB(get_pass, sql, pass);

  if (!strcmp(pass, u.password)) {
    printf(" Logged\n");
    menu_logged(&u);
  } else {
    printf(" Not Logged\n");
  }

  free(sql);
  free(pass);
  return 0;
}

int get_pass(void *ptr, int argc, char **argv, char **colm){
  strcpy(ptr, argv[0]);
  return 0;
}
