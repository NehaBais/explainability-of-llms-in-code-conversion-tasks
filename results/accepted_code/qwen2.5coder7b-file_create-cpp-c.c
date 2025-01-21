#include <stdio.h>
#include <stdlib.h>

int main() {
  // Create an empty file called "output.txt" of size 0 bytes in the current
  // working directory
  FILE *f = fopen("output.txt", "w");
  if (f == NULL) {
    perror("Failed to create 'output.txt'");
    return EXIT_FAILURE;
  }
  fclose(f);

  // Create an empty file called "output.txt" of size 0 bytes in the filesystem
  // root
  f = fopen("/output.txt", "w");
  if (f == NULL) {
    perror("Failed to create '/output.txt'");
    return EXIT_FAILURE;
  }
  fclose(f);

  // Create an empty directory called "docs" in the current working directory
  if (mkdir("docs", 0755) != 0) {
    perror("Failed to create 'docs' directory");
    return EXIT_FAILURE;
  }

  // Create an empty directory called "docs" in the filesystem root
  if (mkdir("/docs", 0755) != 0) {
    perror("Failed to create '/docs' directory");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}