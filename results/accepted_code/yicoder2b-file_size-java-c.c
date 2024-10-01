#include <stdio.h>

int main() {
  // Define the files
  FILE *fileA = fopen("file.txt", "rb");
  if (!fileA) {
    printf("Error opening file1\n");
    return 0;
  }

  FILE *fileB = fopen("/file.txt", "rb");
  if (!fileB) {
    fclose(fileA);
    printf("Error opening file2\n");
    return 0;
  }

  // Initialize variables
  long sizeA = 0, sizeB = 0;

  // Get the sizes of both files
  while (!feof(fileA)) {
    sizeA += fread(&sizeA, sizeof(char), 1, fileA);
  }

  while (!feof(fileB)) {
    sizeB += fread(&sizeB, sizeof(char), 1, fileB);
  }

  // Print the sizes in bytes
  printf("Size of file1: %ld B\n", sizeA);
  printf("Size of file2: %ld B\n", sizeB);

  // Close files and free allocated memory
  fclose(fileA);
  fclose(fileB);
  return 0;
}