#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void createFile(const char *fn) {
  FILE *f = fopen(fn, "wb");
  if (!f) {
    perror("Error creating file");
    return;
  }
  printf("file %s created!\n", fn);
  fclose(f);
}

void createDir(const char *dn) {
  int success = mkdir(dn, 0755);
  if (success != 0) {
    perror("Error creating directory");
    return;
  }
  printf("directory %s created!\n", dn);
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/");
}