#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

// The ActiveXObject is not available in C, so we need to use a different
// library for file and directory operations. In this case, we'll use the
// standard C library functions.

int main() {
  // Rename input.txt into output.txt here
  char *old_path = "input.txt";
  char *new_path = "output.txt";
  if (rename(old_path, new_path) == -1) {
    perror("Renaming file failed");
    return 1;
  }

  // Rename c:/input.txt into c:/output.txt here
  char *old_path2 = "c:/input.txt";
  char *new_path2 = "c:/output.txt";
  if (rename(old_path2, new_path2) == -1) {
    perror("Renaming file failed");
    return 1;
  }

  // Rename docs into mydocs here
  char *old_path3 = "docs";
  char *new_path3 = "mydocs";
  if (rename(old_path3, new_path3) == -1) {
    perror("Renaming directory failed");
    return 1;
  }

  // Rename c:/docs into c:/mydocs here
  char *old_path4 = "c:/docs";
  char *new_path4 = "c:/mydocs";
  if (rename(old_path4, new_path4) == -1) {
    perror("Renaming directory failed");
    return 1;
  }

  // Successfully renamed all files and directories
  printf("Files and directories successfully renamed.\n");
  return 0;
}