#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void create(const char *directory) {
  // Create an empty file named "output.txt"
  const char *file_path = "output.txt";
  FILE *file = fopen(file_path, "w");
  if (file == NULL) {
    perror("Error creating output.txt");
    return;
  }
  fclose(file);

  // Create an empty directory named "docs"
  const char *dir_path = "docs";
  int result = mkdir(dir_path, 0755);
  if (result != 0) {
    perror("Error creating docs directory");
  }
}

int main() {
  // Call the create function for the current working directory
  printf("Creating files and directories in the current working directory:\n");
  create(".");

  // Change to the root directory before calling create again
  if (chdir("/") != 0) {
    perror("Error changing to the root directory");
    return EXIT_FAILURE;
  }

  printf("\nCreating files and directories in the filesystem root:\n");
  create("/");

  return EXIT_SUCCESS;
}