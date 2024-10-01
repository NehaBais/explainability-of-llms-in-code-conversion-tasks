#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void createFile(char *fn) {
  FILE *f = fopen(fn, "w");
  if (f == NULL) {
    perror("Error creating file");
    return;
  }
  printf("file %s created!\n", fn);
  fclose(f);
}

void createDir(char *dn) {
  if (mkdir(dn, 0777) < 0) {
    perror("Error creating directory");
    return;
  }
  printf("directory %s created!\n", dn);
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");

  return 0;
}