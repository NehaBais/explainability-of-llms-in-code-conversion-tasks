#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

bool checkFileExist(const char *filePath) {
  struct stat buffer;
  return (stat(filePath, &buffer) == 0);
}

int main() {
  // Check for file existence in the current working directory
  if (checkFileExist("input.txt")) {
    printf("The file input.txt exists in the current working directory.\n");
  } else {
    printf("The file input.txt does not exist in the current working "
           "directory.\n");
  }

  // Check for file existence in root directory
  if (checkFileExist("/input.txt")) {
    printf("The file /input.txt exists in the root directory.\n");
  } else {
    printf("The file /input.txt does not exist in the root directory.\n");
  }

  return 0;
}