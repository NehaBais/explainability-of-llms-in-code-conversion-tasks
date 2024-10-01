#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void create(const char *directory) {
  // Create an empty file called "output.txt" of size 0 bytes in the specified
  // directory
  FILE *output = fopen(strcat(directory, "/output.txt"), "w");
  if (output != NULL) {
    fclose(output);
  }

  // Create a new empty directory called "docs" in the specified directory
  char command[512];
  snprintf(command, sizeof(command), "mkdir %s/docs", directory);
  system(command);
}