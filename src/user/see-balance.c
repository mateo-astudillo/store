#include "../../hdr/deps.h"
#include "../../hdr/macros.h"
#include "../../hdr/user.h"
#include "../../hdr/crud.h"

int see_balance(char *user){
  char *sql = malloc(LENGTH_SQL);
  char *balance = malloc(LENGTH_WORD);

  sprintf(sql, "SELECT balance FROM users WHERE username='%s';", user);
  
  read_DB(get_balance, sql, balance);

  printf(" Balance: %s\n", balance);
  sleep(2);

  free(sql);
  free(balance);
  return 0;
}

int get_balance(void *ptr, int argc, char **argv, char **colm){
  strcpy(ptr, argv[0]);
  return 0;
}
