#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  // Define paths
  const char *src1 = "input.txt";
  const char *dst1 = "output.txt";
  const char *src2 = "docs";
  const char *dst2 = "mydocs";

  // Rename files in the current directory
  if (rename(src1, dst1) == 0 && rename(src2, dst2) == 0) {
    printf("Successfully renamed %s to %s\n", src1, dst1);
    printf("Successfully renamed %s to %s\n", src2, dst2);
  } else {
    perror("Error renaming files");
  }

  // Rename files in the root directory
  if (rename("/input.txt", "/output.txt") == 0 &&
      rename("/docs", "/mydocs") == 0) {
    printf("Successfully renamed %s to %s\n", src1, dst1);
    printf("Successfully renamed %s to %s\n", src2, dst2);
  } else {
    perror("Error renaming files");
  }

  return 0;
}