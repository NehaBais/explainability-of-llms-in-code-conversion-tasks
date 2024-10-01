```c
#include <stdio.h>
#include <string.h>

int main() {
  // Rename file in current working directory
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming file");
    return 1;
  }

  // Rename directory in current working directory
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming directory");
    return 1;
  }

  // Rename file in root directory
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming file in root directory");
    return 1;
  }

  // Rename directory in root directory
  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming directory in root directory");
    return 1;
  }

  return 0;
}
```
