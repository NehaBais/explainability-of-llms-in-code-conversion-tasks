#include <stdio.h>
#include <stdlib.h>

int main() {
  char filename[100] = "output.txt";
  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("Error opening file %s\n", filename);
    exit(EXIT_FAILURE);
  }
  fclose(fp);

  char directory[100] = "/docs";
  DIR *d = opendir(directory);
  if (d == NULL) {
    printf("Error opening dir %s\n", directory);
    exit(EXIT_FAILURE);
  }
  closedir(d);

  // This is correct. There's no need to construct a new filename with opendir
  // and closedir in C.

  return 0;
}