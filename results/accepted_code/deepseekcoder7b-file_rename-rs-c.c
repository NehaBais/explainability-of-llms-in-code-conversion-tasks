#include <stdio.h>

int main(void) {
  if (rename("input.txt", "output.txt") != 0) {
    fprintf(stderr, "File move error: input.txt -> output.txt\n");
  }

  if (rename("docs", "mydocs") != <｜begin▁of▁sentence｜ > 0) {
    fprintf(stderr, "File move error: docs -> mydocs\n");
  }

  // In C there is no way to rename in the filesystem root.
  // If we try to do it from a compiled program running as admin
  // on Linux or macOS it can be done but you must prefix paths with / (or ./
  // for relative) and run this program as root:

  if (rename("/input.txt", "/output.txt") != 0) {
    fprintf(stderr, "File move error: /input.txt -> /output.txt\n");
  }

  if (rename("/docs", "/mydocs") != 0) {
    fprintf(stderr, "File move error: /docs -> /mydocs\n");
  }

  return 0;
}