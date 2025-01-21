#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void create(const char *directory) {
  // Create the file "output.txt" in the given directory
  int fd = open(
      strcat(strcpy(malloc(strlen(directory) + 8), directory), "/output.txt"),
      O_WRONLY | O_CREAT, 0644);
  if (fd == -1) {
    perror("Error creating file");
    return;
  }
  close(fd);

  // Create the directory "docs" in the given directory
  if (mkdir(strcat(strcpy(malloc(strlen(directory) + 5), directory), "/docs") ==
            -1)) {
    perror("Error creating directory");
    return;
  }
}

int main() {
  // Create "output.txt" and "docs" in the current working directory
  create(".");

  // Create "output.txt" and "docs" in the root directory
  create("/");

  return 0;
}