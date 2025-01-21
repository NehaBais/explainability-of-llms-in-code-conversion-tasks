#include <stdio.h>

int main() {
  // Check for input.txt in current working directory
  if (access("docs/input.txt", F_OK) == 0) {
    printf("Input file 'docs/input.txt' exists.\n");
  } else {
    printf("Input file 'docs/input.txt' does not exist.\n");
  }

  // Check for input.txt in the root directory
  if (access("/docs/input.txt", F_OK) == 0) {
    printf("Input file '/docs/input.txt' exists.\n");
  } else {
    printf("Input file '/docs/input.txt' does not exist.\n");
  }

  return 0;
}