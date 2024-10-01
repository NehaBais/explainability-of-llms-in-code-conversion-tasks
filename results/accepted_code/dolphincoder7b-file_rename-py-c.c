#include <stdio.h>
#include <unistd.h> // for rename()

int main() {
  // First, rename "input.txt" to "output.txt", assuming that you are currently
  // in the current working directory
  if (rename("input.txt", "output.txt") != 0) {
    printf("Failed to rename input.txt to output.txt\n");
    return -1; // Exit with an error code
  }

  // Then, rename the directory "docs" to "mydocs", assuming that you are
  // currently in the filesystem root
  if (rename("/home/user/docs", "/home/user/mydocs") != 0) {
    printf("Failed to rename /home/user/docs to /home/user/mydocs\n");
    return -1; // Exit with an error code
  }

  // Next, rename "input.txt" to "output.txt", assuming that you are currently
  // in the filesystem root
  if (rename("/home/user/input.txt", "/home/user/output.txt") != 0) {
    printf("Failed to rename /home/user/input.txt to /home/user/output.txt\n");
    return -1; // Exit with an error code
  }

  // Finally, rename the directory "docs" to "mydocs", assuming that you are
  // currently in the filesystem root
  if (rename("/home/user/docs", "/home/user/mydocs") != 0) {
    printf("Failed to rename /home/user/docs to /home/user/mydocs\n");
    return -1; // Exit with an error code
  }

  return 0;
}