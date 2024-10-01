#include <stdio.h>
#include <stdlib.h>

int main() {
  if (rename("input.txt", "output.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    perror("Error in file renaming");
  }

  if (rename("docs", "mydocs") == 0) {
    printf("Directory renamed successfully\n");
  } else {
    perror("Error in directory renaming");
  }

  // for the filesystem root we need full path:
  if (rename("/input.txt", "/output.txt") == 0) {
    printf("File renamed successfully\n");
  } else {
    perror("Error in file renaming");
  }

  if (rename("/docs", "/mydocs") == 0) {
    printf("Directory renamed successfully\n");
  } else {
    perror("Error in directory renaming");
  }

  return 0;
}