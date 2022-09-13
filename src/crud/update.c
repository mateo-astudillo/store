#include "../../headers/header.h"

int update_user(char *column, char *value, char *user){
  sqlite3 *DB = NULL;
  int sts = 0;
  char *sql = malloc(LENGTH_SQL);

  sts = sqlite3_open(FILENAME_DB, &DB);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }
  
  sprintf(sql, "UPDATE users SET %s = '%s' WHERE username = '%s';", column, value, user);
  sts = sqlite3_exec(DB, sql, NULL, NULL, NULL);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }

  sqlite3_close(DB);
  return 0;
}
