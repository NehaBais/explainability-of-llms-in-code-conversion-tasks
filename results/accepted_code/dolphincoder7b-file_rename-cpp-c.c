#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 1; // indicate unsuccessful execution
  }

  if (rename("docs", "mydocs") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 2; // indicate unsuccessful execution
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 3; // indicate unsuccessful execution
  }

  if (rename("/docs", "/mydocs") != 0) {
    fprintf(stderr, "%s\n", strerror(errno));
    return 4; // indicate unsuccessful execution
  }

  return 0;
}