#include <stdio.h>
#include <unistd.h> // for rename() function

int main() {
  int result;

  // Renaming "input.txt" into "output.txt" in the current working directory
  result = rename("input.txt", "output.txt");
  if (result != 0) {
    printf("Error occurred while renaming file\n");
  }

  // Renaming "docs" into "mydocs" in the current working directory
  result = rename("docs", "mydocs");
  if (result != 0) {
    printf("Error occurred while renaming directory\n");
  }

  // Renaming "/input.txt" into "/output.txt"
  result = rename("/input.txt", "/output.txt");
  if (result != 0) {
    printf("Error occurred while renaming file in the root filesystem\n");
  }

  // Renaming "/docs" into "/mydocs"
  result = rename("/docs", "/mydocs");
  if (result != 0) {
    printf("Error occurred while renaming directory in the root filesystem\n");
  }

  return 0;
}