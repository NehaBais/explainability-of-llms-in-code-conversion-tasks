#include <stdio.h>

int main() {
  FILE *file = fopen("input.txt", "r");
  if (file) {
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    printf("Size of input.txt: %ld bytes\n", size);
    fclose(file);
  }

  FILE *rootFile = fopen("/input.txt", "r");
  if (rootFile) {
    fseek(rootFile, 0, SEEK_END);
    long rootSize = ftell(rootFile);
    printf("Size of /input.txt: %ld bytes\n", rootSize);
    fclose(rootFile);
  }

  return 0;
}