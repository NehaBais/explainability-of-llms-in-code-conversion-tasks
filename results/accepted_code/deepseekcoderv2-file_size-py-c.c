#include <stdio.h>
#include <stdlib.h>

int main() {
  // Check for input.txt in the current working directory
  FILE *file1 = fopen("input.txt", "r");
  if (file1 == NULL) {
    printf("File 'input.txt' not found in the current working directory.\n");
  } else {
    fseek(file1, 0, SEEK_END);
    long size1 = ftell(file1);
    printf("Size of 'input.txt' in the current working directory: %ld bytes\n",
           size1);
    fclose(file1);
  }

  // Check for input.txt in the root directory
  FILE *file2 = fopen("/input.txt", "r");
  if (file2 == NULL) {
    printf("File 'input.txt' not found in the root directory.\n");
  } else {
    fseek(file2, 0, SEEK_END);
    long size2 = ftell(file2);
    printf("Size of 'input.txt' in the root directory: %ld bytes\n", size2);
    fclose(file2);
  }

  return 0;
}