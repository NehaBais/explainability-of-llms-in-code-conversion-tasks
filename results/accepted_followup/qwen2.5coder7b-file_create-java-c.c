#include <dirent.h> // Include for mkdir()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // Include for getcwd()

void createFileAndDirectory(char *path) {
  FILE *file = fopen(path, "w");
  if (file == NULL) {
    perror("Error creating file");
    return;
  }
  fclose(file);

  if (mkdir(path, 0755) != 0) {
    perror("Error creating directory");
  }
}

int main() {
  char currentDirectory[1024];
  getcwd(currentDirectory, sizeof(currentDirectory));

  createFileAndDirectory(strcat(currentDirectory, "/output.txt"));
  createFileAndDirectory(strcat("/", "output.txt")); // Corrected path
  createFileAndDirectory(strcat(currentDirectory, "/docs"));
  createFileAndDirectory(strcat("/", "docs")); // Corrected path

  return 0;
}