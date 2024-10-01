#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat buffer;

  // Checking for docs/input.txt in current directory
  if (stat("docs/input.txt", &buffer) == 0) {
    printf("File exists in the current working directory.\n");
  } else {
    printf("File does not exist in the current working directory.\n");
  }

  // Checking for /docs/input.txt at root level
  if (stat("/docs/input.txt", &buffer) == 0) {
    printf("File exists at the root of filesystem.\n");
  } else {
    printf("File does not exist at the root of filesystem.\n");
  }

  return 0;
}