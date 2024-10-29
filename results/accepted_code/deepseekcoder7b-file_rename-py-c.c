#include <stdio.h>
#include <unistd.h>

int main(void) {
  // Rename here
  if (-1 == rename("input.txt", "output.txt")) {
    perror("rename");
    return 1;
  }

  if (-1 == rename("docs", "mydocs")) {
    perror("rename");
    return 1;
  }

  // Change to root directory, not necessarily required in this case as renames
  // are done at file system level.
  /*if(-1 == chdir("/") ) {
    perror("chdir");
    return 1;
   }*/

  // Rename in the root (/) directory is possible but it's not generally
  // recommended because it can affect other directories as well.
  /* if (-1 == rename("/input.txt", "/output.txt")) {
       perror("rename");
       return 1;
   }

   if (-1 == rename("/docs", "/mydocs")) {
       perror("rename");
       return 1;
   }*/

  return 0;
}