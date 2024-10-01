#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Rename file "input.txt" to "output.txt" here
  if (rename("input.txt", "output.txt") != 0) {
    printf("Failed to rename 'input.txt' to 'output.txt'\n");
    return -1;
  }

  // Rename directory "docs" to "mydocs" here
  if (rename("docs", "mydocs") != 0) {
    printf("Failed to rename 'docs' to 'mydocs'\n");
    return -1;
  }

  // Rename file "/input.txt" to "/output.txt" in root filesystem here
  if (rename("/input.txt", "/output.txt") != 0) {
    printf("Failed to rename '/input.txt' to '/output.txt'\n");
    return -1;
  }

  // Rename directory "/docs" to "/mydocs" in root filesystem here
  if (rename("/docs", "/mydocs") != 0) {
    printf("Failed to rename '/docs' to '/mydocs'\n");
    return -1;
  }
  return 0;
}