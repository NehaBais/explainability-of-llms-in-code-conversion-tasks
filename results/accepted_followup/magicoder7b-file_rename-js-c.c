#include <stdio.h>  // For printf
#include <stdlib.h> // For exit()
#include <unistd.h> // For rename()

int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Failed to rename input.txt");
    exit(1); // Exit with non-zero status for failure.
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Failed to rename /input.txt");
    exit(1);
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Failed to rename docs");
    exit(1);
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror("Failed to rename /docs");
    exit(1);
  }

  return 0;
}