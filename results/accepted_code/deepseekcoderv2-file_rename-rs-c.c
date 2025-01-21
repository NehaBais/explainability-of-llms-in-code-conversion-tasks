#include <stdio.h>
#include <stdlib.h>

int main() {
  const char *error_msg = "File move error";

  if (rename("input.txt", "output.txt") != 0) {
    perror(error_msg);
    return EXIT_FAILURE;
  }

  if (rename("docs", "mydocs") != 0) {
    perror(error_msg);
    return EXIT_FAILURE;
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror(error_msg);
    return EXIT_FAILURE;
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror(error_msg);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}