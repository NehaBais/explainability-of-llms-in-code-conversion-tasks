#include <stdlib.h>
#include <unistd.h>

int main() {
  // Rename file in the current directory.
  if (rename("input.txt", "output.txt") != 0) {
    perror("Failed to rename input.txt");
  }

  // Rename file in root directory
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Failed to rename /input.txt");
  }

  // Rename folder in the current directory
  if (rename("docs", "mydocs") != 0) {
    perror("Failed to rename docs");
  }

  // Rename folder in root directory
  if (rename("/docs", "/mydocs") != 0) {
    perror("Failed to rename /docs");
  }

  return 0;
}