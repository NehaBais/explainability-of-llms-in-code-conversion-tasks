#include <stdio.h>
#include <stdlib.h>

int main() {
  if (rename("input.txt", "output.txt") == 0) {
    printf("File renamed successfully!\n");
  } else {
    printf("Unable to rename the file!\n");
  }

  if (rename("docs", "mydocs") == 0) {
    printf("Directory renamed successfully!\n");
  } else {
    printf("Unable to rename the directory!\n");
  }

  return 0;
}