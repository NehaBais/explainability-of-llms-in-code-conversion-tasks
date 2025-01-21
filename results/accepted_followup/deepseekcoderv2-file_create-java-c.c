#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h> // Include this for mkdir

int main() {
  // Create file "output.txt" in the current working directory
  FILE *file = fopen("output.txt", "w");
  if (file == NULL) {
    perror("Error creating output.txt");
    return EXIT_FAILURE;
  }
  fclose(file);

  // Create file "output.txt" in the filesystem root
  file = fopen("/output.txt", "w");
  if (file == NULL) {
    perror("Error creating /output.txt");
    return EXIT_FAILURE;
  }
  fclose(file);

  // Create directory "docs" in the current working directory
  if (mkdir("docs", 0777) != 0) {
    perror("Error creating docs directory");
    return EXIT_FAILURE;
  }

  // Create directory "docs" in the filesystem root
  if (mkdir("/docs", 0777) != 0) {
    perror("Error creating /docs directory");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}