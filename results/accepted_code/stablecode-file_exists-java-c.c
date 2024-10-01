#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int checkFile(char *path) {
  struct stat st;
  if (stat(path, &st) == 0) {
    return 1;
  }
  return 0;
}

int main() {
  // for the current working directory
  char path1[1024];
  strcpy(path1, "docs/input.txt");
  if (checkFile(path1)) {
    printf("The file %s exists.\n", path1);
  } else {
    printf("The file %s does not exist.\n", path1);
  }

  // for a file and directory in the filesystem root
  char path2[1024];
  strcpy(path2, "/docs/input.txt");
  if (checkFile(path2))) {
        printf("The file %s exists.\n", path2);
    }
  else {
    printf("The file %s does not exist.\n", path2);
  }

  return 0;
}