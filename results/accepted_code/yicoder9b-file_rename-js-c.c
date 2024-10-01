#include <stdio.h>

int main() {
  if (rename("input.txt", "output.txt") == 0) {
    printf("File rename successful\n");
  } else {
    printf("Error in renaming the file\n");
  }

  // for root directory:
  if (rename("c:/input.txt", "c:/output.txt") == 0) {
    printf("File rename successful\n");
  } else {
    printf("Error in renaming the file\n");
  }

  // For directories:
  if (rename("docs", "mydocs") == 0) {
    printf("Directory rename successful\n");
  } else {
    printf("Error in renaming the directory\n");
  }

  // for root directory:
  if (rename("c:/docs", "c:/mydocs") == 0) {
    printf("Directory rename successful\n");
  } else {
    printf("Error in renaming the directory\n");
  }
  return 0;
}