#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fct(const char *path) {
  if (mkdir(path, 0755) != 0 && errno != EEXIST) {
    perror("Error creating directory");
  }
}

int main() {
  const char *currentDirectory = "./";
  const char *rootDirectory = "/";

  // Creating empty file and directory in current working directory
  FILE *fpCurrentFile = fopen(
      strcat((char *)malloc(strlen(currentDirectory) + 7), "output.txt"), "w");
  if (fpCurrentFile == NULL) {
    perror("Error opening file");
  } else {
    fclose(fpCurrentFile);
  }

  fct(strcat((char *)malloc(strlen(currentDirectory) + 5), "docs"));

  // Creating empty file and directory in filesystem root
  FILE *fpRootFile = fopen(
      strcat((char *)malloc(strlen(rootDirectory) + 8), "/output.txt"), "w");
  if (fpRootFile == NULL) {
    perror("Error opening file");
  } else {
    fclose(fpRootFile);
  }

  fct(strcat((char *)malloc(strlen(rootDirectory) + 6), "/docs"));

  return 0;
}