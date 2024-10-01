#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  struct stat buffer;

  // Check for "input.txt" in the current working directory
  if (stat("./input.txt", &buffer) == 0 && S_ISREG(buffer.st_mode)) {
    printf("File input.txt exists and is a regular file.\n");
  } else {
    printf("File input.txt does not exist or it is not a regular file.\n");
  }

  // Check for "input.txt" in the root of the filesystem
  if (stat("/input.txt", &buffer) == 0 && S_ISREG(buffer.st_mode)) {
    printf("File input.txt exists and is a regular file.\n");
  } else {
    printf("File input.txt does not exist or it is not a regular file.\n");
  }

  // Check for "docs" in the current working directory
  if (stat("./docs", &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
    printf("Directory docs exists and is a directory.\n");
  } else {
    printf("Directory docs does not exist or it is not a directory.\n");
  }

  // Check for "docs" in the root of the filesystem
  if (stat("/docs", &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
    printf("Directory docs exists and is a directory.\n");
  } else {
    printf("Directory docs does not exist or it is not a directory.\n");
  }

  return 0;
}