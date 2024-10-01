#include <fcntl.h>
#include <io.h>
#include <stdio.h>

int main(void) {
  FILE *inputFile = fopen("input.txt", "r");
  if (inputFile == NULL) {
    perror("Error opening file input.txt");
    exit(1);
  }

  printf("Size of input.txt: %ld\n", ftell(inputFile));

  fclose(inputFile);

  FILE *rootInputFile = fopen("c:/input.txt", "r");
  if (rootInputFile == NULL) {
    perror("Error opening file c:/input.txt");
    exit(1);
  }

  printf("Size of c:/input.txt: %ld\n", ftell(rootInputFile));

  fclose(rootInputFile);

  return 0;
}