#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
  char oldname[1024];
  char newname[1024];

  // Rename file (or directory)
  bool success = rename("input.txt", "output.txt");
  printf("The following file called input.txt was renamed as output.txt %s\n",
         success ? "was renamed" : "could not be renamed");

  // Rename directory
  success = rename("docs", "mydocs");
  printf("The following directory called docs was renamed as mydocs %s\n",
         success ? "was renamed" : "could not be renamed");

  return 0;
}