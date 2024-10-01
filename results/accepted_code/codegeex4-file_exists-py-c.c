#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat info;

  // Check for file and directory in current working directory
  if (stat("input.txt", &info) != -1 && S_ISREG(info.st_mode)) {
    printf("File exists in the current working directory.\n");
  } else {
    printf("File does not exist in the current working directory.\n");
  }

  if (stat("docs", &info) != -1 && S_ISDIR(info.st_mode)) {
    printf("Directory exists in the current working directory.\n");
  } else {
    printf("Directory does not exist in the current working directory.\n");
  }

  // Check for file and directory in root directory
  if (stat("/input.txt", &info) != -1 && S_ISREG(info.st_mode)) {
    printf("File exists in the root directory.\n");
  } else {
    printf("File does not exist in the root directory.\n");
  }

  if (stat("/docs", &info) != -1 && S_ISDIR(info.st_mode)) {
    printf("Directory exists in the root directory.\n");
  } else {
    printf("Directory does not exist in the root directory.\n");
  }

  return 0;
}