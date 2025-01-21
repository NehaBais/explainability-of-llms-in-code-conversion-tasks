#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int file_exists(const char *filename) {
  struct stat buffer;
  return (stat(filename, &buffer) == 0);
}

void check_files() {
  // Check for the current working directory
  if (file_exists("docs/input.txt")) {
    printf("File docs/input.txt exists in the current working directory.\n");
  } else {
    printf("File docs/input.txt does not exist in the current working "
           "directory.\n");
  }

  // Check for the filesystem root
  if (file_exists("/docs/input.txt")) {
    printf("File /docs/input.txt exists at the filesystem root.\n");
  } else {
    printf("File /docs/input.txt does not exist at the filesystem root.\n");
  }
}

int main() {
  check_files();
  return 0;
}