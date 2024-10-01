#include <stdio.h>
#include <stdlib.h>

int main() {
  if (rename("input.txt", "output.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    perror("Failed to rename the file: ");
  }

  if (rename("docs", "mydocs") == 0) {
    printf("Directory renamed successfully\n");
  } else {
    perror("Failed to rename directory: ");
  }

  // for renaming files in the root filesystem
  if (rename("/input.txt", "/output.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    perror("Failed to rename file: ");
  }

  // for renaming directory in the root filesystem
  if (rename("/docs", "/mydocs") == 0) {
    printf("Directory renamed successfully\n");
  } else {
    perror("Failed to rename directory: ");
  }

  return 0;
}