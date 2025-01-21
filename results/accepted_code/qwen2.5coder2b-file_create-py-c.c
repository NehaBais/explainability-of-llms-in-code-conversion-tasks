#include <stdio.h>
#include <stdlib.h>

void create(char *directory) {
  if (access(directory, F_OK) == -1) { // Check if the directory already exists
    mkdir(directory, 0777); // Create a new directory with default permissions
  }
}

int main() {
  create(".");
  create("/");
  return 0;
}