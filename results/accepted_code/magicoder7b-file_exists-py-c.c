#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CHECK_FILE(file) (access((file), F_OK)) // Check if file exists
#define CHECK_DIR(dir)                                                         \
  (access((dir), R_OK | W_OK | X_OK)) // Check if directory is accessible

int main() {
  char *file = "input.txt";
  char *rootFile = "/input.txt";
  char *dir = "docs";
  char *rootDir = "/docs";

  printf("Current working directory: \n");

  if (CHECK_FILE(file) != 0) {
    printf("'%s' does not exist.\n", file);
  } else {
    printf("'%s' exists.\n", file);
  }

  if (CHECK_DIR(dir) != 0) {
    printf("'%s' directory is not accessible.\n", dir);
  } else {
    printf("'%s' directory is accessible.\n", dir);
  }

  if (CHECK_FILE(rootFile) != 0) {
    printf("/'%s' does not exist.\n", rootFile);
  } else {
    printf("/'%s' exists.\n", rootFile);
  }

  if (CHECK_DIR(rootDir) != 0) {
    printf("/'%s' directory is not accessible.\n", rootDir);
  } else {
    printf("/'%s' directory is accessible.\n", rootDir);
  }

  return 0;
}