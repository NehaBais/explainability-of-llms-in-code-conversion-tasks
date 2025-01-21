#include <stdio.h>
#include <stdlib.h>

void createFile(const char *fn) {
  FILE *file = fopen(fn, "w");
  if (file == NULL) {
    perror("Failed to open file for writing");
    return;
  }
  printf("File %s created!\n", fn);
  fclose(file);
}

void createDir(const char *dn) {
  if (mkdir(dn, 0777) != 0) {
    perror("Failed to create directory");
    return;
  }
  printf("Directory %s created!\n", dn);
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");

  return 0;
}