#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filename) {
  FILE *file = fopen(filename, "w"); // Open the file in write mode
  if (file == NULL) {
    perror("Error creating file");
    return;
  }

  fclose(file); // Close the file after writing
}

void createDirectory(const char *dirname) {
  int result =
      mkdir(dirname, 0755); // Create a directory with default permissions (755)
  if (result != 0) {
    perror("Error creating directory");
  }
}

int main() {
  const char *fileNameHere = "output.txt";
  createFile(fileNameHere);
  createDirectory("./docs"); // Current working directory is "."

  // Create the file in filesystem root
  const char *rootFileName = "/output.txt";
  createFile(rootFileName);
  createDirectory("/docs");

  return 0;
}