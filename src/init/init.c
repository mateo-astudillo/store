#include "../../hdr/deps.h"
#include "../../hdr/macros.h"
#include "../../hdr/init.h"
#include "../../hdr/crud.h"


int init(){
  sqlite3 *DB = NULL;
  int sts = 0; // status
  char *sql = (char*)calloc(LENGTH_SQL, sizeof(char));
  
  sts = sqlite3_open(FILENAME_DB, &DB);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }
 
  strcpy(sql, CREATE_TABLE_DB);
  sts = sqlite3_exec(DB, sql, NULL, NULL, NULL);
  if (sts != SQLITE_OK) {
    fprintf(stderr, "%s\n", sqlite3_errmsg(DB));
    return sqlite3_errcode(DB);
  }

  free(sql);
  sqlite3_close(DB);

  return sts;
}

