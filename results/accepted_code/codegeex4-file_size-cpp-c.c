#include <stdio.h>
#include <stdlib.h>

void print_file_size(char *filename) {
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Error opening file");
    exit(EXIT_FAILURE);
  }

  fseek(fp, 0L, SEEK_END);
  long size = ftell(fp);

  printf("Size of file %s is %ld bytes.\n", filename, size);

  fclose(fp);
}

int main() {
  print_file_size("./input.txt"); // Current directory
  print_file_size("/input.txt");  // Root directory (May require admin rights)
}