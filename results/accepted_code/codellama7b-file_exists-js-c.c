#include <stdio.h>

int main() {
  FILE *fp;                     // pointer to a file object
  char *filename = "input.txt"; // name of the input file
  fp = fopen(filename, "r");    // open the file for reading
  if (fp == NULL) {
    printf("Error: failed to open %s\n", filename);
    return 1;
  }
  printf("File %s exists and is readable.\n", filename);
  fclose(fp); // close the file

  char *directory = "docs"; // name of the directory
  if (access(directory, F_OK) != 0) {
    printf("Error: failed to access %s\n", directory);
    return 1;
  }
  printf("Directory %s exists and is accessible.\n", directory);

  return 0;
}