#include <stdio.h>

int main() {
  // Rename here file from input.txt to output.txt
  if (rename("input.txt", "output.txt") == -1) {
    printf("Failed to rename input.txt\n");
    return 1; // Exit with error
  }

  // Redirect here the current directory's docs to mydocs
  if (rename("docs", "mydocs") == -1) {
    printf("Failed to redirect the current directory's docs\n");
    return 1; // Exit with error
  }

  // Redirect filesystem root's docs to mydocs
  if (rename("/docs", "/mydocs") == -1) {
    printf("Failed to redirect the filesystem root's docs\n");
    return 1; // Exit with error
  }

  printf("Successfully renamed files and directories\n");
  return 0; // Successful exit
}