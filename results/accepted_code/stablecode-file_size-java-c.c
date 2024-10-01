#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE *fileA;
  if ((fileA = fopen("file.txt", "rb")) == NULL) {
    printf("Error opening file A\n");
    return 1;
  }

  long long int sizeOfFileA = 0;
  fseek(fileA, 0, SEEK_END);
  sizeOfFileA = ftell(fileA);
  fclose(fileA);

  printf("Size of File A: %lld Bytes\n", sizeOfFileA);

  FILE *fileB;
  if ((fileB = fopen("/file.txt", "rb")) == NULL) {
    printf("Error opening file B\n");
    return 1;
  }

  long long int sizeOfFileB = 0;
  fseek(fileB, 0, SEEK_END);
  sizeOfFileB = ftell(fileB);
  fclose(fileB);

  printf("Size of File B: %lld Bytes\n", sizeOfFileB);

  return 0;
}