#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Check if input.txt exists in the current working directory
  struct stat buffer1;
  if (stat("input.txt", &buffer1) == 0) {
    printf("File exists\n");
  } else {
    perror("File does not exist");
    return EXIT_FAILURE;
  }

  // Check if /input.txt exists in the root of the filesystem
  struct stat buffer2;
  if (stat("/input.txt", &buffer2) == 0) {
    printf("File exists\n");
  } else {
    perror("File does not exist");
    return EXIT_FAILURE;
  }

  // Check if docs directory exists in the current working directory
  struct stat buffer3;
  if (stat("docs", &buffer3) == 0) {
    printf("Directory exists\n");
  } else {
    perror("Directory does not exist");
    return EXIT_FAILURE;
  }

  // Check if /docs directory exists in the root of the filesystem
  struct stat buffer4;
  if (stat("/docs", &buffer4) == 0) {
    printf("Directory exists\n");
  } else {
    perror("Directory does not exist");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}