#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *err = "File move error";

  if (rename("input.txt", "output.txt")) {
    fprintf(stderr, "%s: %s\n", err, strerror(errno));
    exit(EXIT_FAILURE);
  }

  if (rename("docs", "mydocs")) {
    fprintf(stderr, "%s: %s\n", err, strerror(errno));
    exit(EXIT_FAILURE);
  }

  if (rename("/input.txt", "/output.txt")) {
    fprintf(stderr, "%s: %s\n", err, strerror(errno));
    exit(EXIT_FAILURE);
  }

  if (rename("/docs", "/mydocs")) {
    fprintf(stderr, "%s: %s\n", err, strerror(errno));
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}