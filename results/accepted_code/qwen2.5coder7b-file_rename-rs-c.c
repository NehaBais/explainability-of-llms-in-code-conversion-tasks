#include <stdio.h>
#include <stdlib.h>

int main() {
  const char *err = "File move error";

  if (rename("input.txt", "output.txt") != 0) {
    perror(err);
    return EXIT_FAILURE;
  }

  if (rename("docs", "mydocs") != 0) {
    perror(err);
    return EXIT_FAILURE;
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror(err);
    return EXIT_FAILURE;
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror(err);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}