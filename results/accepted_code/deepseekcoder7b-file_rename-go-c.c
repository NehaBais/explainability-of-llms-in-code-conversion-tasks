#include <stdio.h>
#include <stdlib.h>

int main() {
  // Rename "input.txt" to "output.txt" in the current directory
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming 'input.txt' to 'output.txt': ");
    return 1;
  }

  // Rename "docs" to "mydocs" in the current directory
  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming 'docs' to 'mydocs': ");
    return 1;
  }

  // You cannot rename a file at root level or in different location, because
  // that requires superuser privileges. And you can't rename directories by
  // providing absolute path as C standard library does not support this
  // operation.

  return 0;
}