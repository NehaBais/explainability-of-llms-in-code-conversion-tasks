#include <stdio.h>
#include <stdlib.h>

long get_file_size(const char *filename) {
  FILE *fp;
  if ((fp = fopen(filename, "r")) == NULL) {
    printf("Unable to open file %s\n", filename);
    exit(1);
  }

  fseek(fp, 0L, SEEK_END);
  long size = ftell(fp);
  fclose(fp);

  return size;
}

int main() {
  printf("Size of file input.txt is %ld bytes\n", get_file_size("input.txt"));
  printf("Size of file /input.txt is %ld bytes\n", get_file_size("/input.txt"));
}