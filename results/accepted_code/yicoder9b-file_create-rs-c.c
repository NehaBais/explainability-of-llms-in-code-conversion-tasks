#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

void error_handler(const char *error) {
  fprintf(stderr, "Error: %s\n", error);
  exit(1);
}

void createDirAndFile(char *dirName) {
  struct stat st = {0};
  stat(dirName, &st);

  if (mkdir(dirName, 0700) < 0 && errno != EEXIST) {
    error_handler("Error creating directory.");
  }

  FILE *f = fopen(strcat(dirName, "/" FILE_NAME), "w");
  if (f == NULL) {
    error_handler("Failed to create file.");
  } else {
    fclose(f);
  }
}

int main() {
  createDirAndFile(DIR_NAME);
  char rootDir[2] = "/";
  createDirAndFile(rootDir);
  return 0;
}