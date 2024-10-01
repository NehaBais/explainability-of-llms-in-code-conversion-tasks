#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filePath) {
    FILE *file = fopen(filePath, "w"));

    if (file == NULL) {
      printf("Error: Could not create file at path %s\n", filePath);
      return;
    }

    fclose(file);
}

void createDir(const char *dirPath) {
    int result = mkdir(dirPath, 0700));

    if (result != 0) {
      printf("Error: Could not create directory at path %s\n", dirPath);
      return;
    }
}

int main() {
  createFile("output.txt");
  createFile("/output.txt");
  createDir("docs");

  return 0;
}