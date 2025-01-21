#include <stdio.h>

int main(void) {
  if (rename("input.txt", "output.txt") != 0) {
    fprintf(stderr, "File move error: input.txt -> output.txt\n");
  }
  if (rename("docs", "mydocs") != 0) {
    fprintf(stderr, "File move error: docs -> mydocs\n");
  }
  return 0;
}