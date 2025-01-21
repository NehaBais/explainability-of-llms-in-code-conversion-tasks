#include <stdio.h>
#include <stdlib.h>

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input.txt to output.txt in current directory");
    return EXIT_FAILURE;
  }
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs to mydocs in current directory");
    return EXIT_FAILURE;
  }
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming input.txt to output.txt in root directory");
    return EXIT_FAILURE;
  }
  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming docs to mydocs in root directory");
    return EXIT_FAILURE;
  }
  return 0;
}