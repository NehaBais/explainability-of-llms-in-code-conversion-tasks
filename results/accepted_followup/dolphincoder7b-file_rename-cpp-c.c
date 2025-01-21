#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 1;
  }

  if (rename("docs", "mydocs") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 2;
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 3;
  }

  if (rename("/docs", "/mydocs") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 4;
  }

  return 0;
}