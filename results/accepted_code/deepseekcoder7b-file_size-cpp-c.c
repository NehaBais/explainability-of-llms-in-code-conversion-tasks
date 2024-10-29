#include <stdio.h>

void print_file_size(const char *filename) {
  FILE *file = fopen(filename, "r");

  if (file == NULL) {
    printf("Could not open file %s\n", filename);
    return;
  }

  fseek(file, 0L, SEEK_END);
  long size = ftell(file);

  printf("Size of file %s is %ld bytes.\n", filename, size);

  fclose(file);
}

int main() {
  print_file_size("input.txt");
  // for the root directory just use "/" in place of "./"
  print_file_size("/input.txt");
}