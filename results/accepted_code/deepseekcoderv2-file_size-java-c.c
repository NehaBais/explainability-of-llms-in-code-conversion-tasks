#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fileA = fopen("input.txt", "r");
  if (fileA == NULL) {
    perror("Error opening input.txt in current directory");
    return EXIT_FAILURE;
  }
  fseek(fileA, 0, SEEK_END);
  long sizeA = ftell(fileA);
  printf("%ld B\n", sizeA);
  fclose(fileA);

  FILE *fileB = fopen("/input.txt", "r");
  if (fileB == NULL) {
    perror("Error opening input.txt in root directory");
    return EXIT_FAILURE;
  }
  fseek(fileB, 0, SEEK_END);
  long sizeB = ftell(fileB);
  printf("%ld B\n", sizeB);
  fclose(fileB);

  return EXIT_SUCCESS;
}