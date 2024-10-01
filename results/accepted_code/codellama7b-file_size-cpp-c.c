#include <stdio.h>
#include <stdlib.h>

void print_file_size(const char *filename) {
  FILE *fptr;
  if ((fptr = fopen(filename, "r")) == NULL) {
    printf("Error: unable to open file %s\n", filename);
    return;
  }

  // Get the size of the file
  fseek(fptr, 0, SEEK_END);
  long filesize = ftell(fptr);
  rewind(fptr);

  printf("Size of file %s is %ld bytes.\n", filename, filesize);

  // Close the file
  fclose(fptr);
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}