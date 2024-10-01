#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

// check if the file exists in current directory or not, print out information
// accordingly.
void printStat(char *p) {
  struct stat s;
  int exist = lstat(p, &s); // Check whether it is a valid path. If yes, set
                            // status to true and return its value

  if (exist == -1) { // if path does not exist, print out the error message
    printf("error: path %s doesn't exist!\n", p);
  } else { // if path exists, check whether it is a directory.
    int type = s.st_mode;
    char *fpath =
        malloc(strlen("/") + strlen(p)); // allocate memory for fpath string

    strcpy(fpath, "/");
    strcat(fpath, p); // concatenate path and file name

    if (S_ISDIR(type)) {
      printf("%s is a directory.\n", fpath);

    } else {
      printf("%s is not a directory\n", fpath);
    }
  }
}
int main() {

  printStat("input.txt");  // check if input exists in current dir
  printStat("/input.txt"); // check if /input exist on root of filesystem
  printStat("docs");       // check if docs exists in current directory
  printStat("/docs");      // check whether /docs exist on root of filesystem
}