#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void createFile(char *fn) {
  FILE *f;

  if ((f = fopen(fn, "w")) == NULL) {
    perror("Error opening file");
    return;
  }
  printf("file %s created!\n", fn);
  fclose(f);
}

void createDir(char *dn) {
  if (mkdir(dn, 0666)) {
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