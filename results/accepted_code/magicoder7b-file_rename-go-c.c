#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // for rename() function

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input file");
    exit(EXIT_FAILURE);
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs directory");
    exit(EXIT_FAILURE);
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming /input file");
    exit(EXIT_FAILURE);
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming /docs directory");
    exit(EXIT_FAILURE);
  }

  return 0;
}