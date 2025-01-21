#include <stdio.h>
#include <stdlib.h>

int main() {
  char err[] = "File move error";

  if (rename("input.txt", "output.txt") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("docs", "mydocs") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  return 0;
}