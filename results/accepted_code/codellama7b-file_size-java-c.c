#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fileA = fopen("file.txt", "r");
  long sizeA = 0;
  if (fileA != NULL) {
    fseek(fileA, 0, SEEK_END);
    sizeA = ftell(fileA);
    fclose(fileA);
    printf("%ld B\n", sizeA);
  }
  FILE *fileB = fopen("/file.txt", "r");
  long sizeB = 0;
  if (fileB != NULL) {
    fseek(fileB, 0, SEEK_END);
    sizeB = ftell(fileB);
    fclose(fileB);
    printf("%ld B\n", sizeB);
  }
  return 0;
}