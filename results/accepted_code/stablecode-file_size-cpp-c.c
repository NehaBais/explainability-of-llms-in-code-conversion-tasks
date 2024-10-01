#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_file_size(const char *filename) {
  FILE *file = fopen(filename, "rb");

  if (file == NULL) {
    printf("Failed to open file: %s\n", filename);
    return;
  }

  fseek(file, 0, SEEK_END);
  long size = ftell(file);
  rewind(file);

  fclose(file);

  printf("Size of file '%s' is %ld bytes.\n", filename, size);
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
}