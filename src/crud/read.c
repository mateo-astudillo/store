#include "../../hdr/deps.h"
#include "../../hdr/macros.h"
#include "../../hdr/crud.h"

int read_DB(int callback(void *, int, char**, char**), char *sql, void *ptr){
  sqlite3 *DB = NULL;
  int sts = 0;

  sts = sqlite3_open(FILENAME_DB, &DB);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }

  sts = sqlite3_exec(DB, sql, callback, ptr, NULL);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }

  sqlite3_close(DB);
  return sts;
}

