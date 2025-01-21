#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h> // Include this header to declare chdir

void create(const char *directory) {
  const char *file_path = "output.txt";
  FILE *file = fopen(file_path, "w");
  if (file == NULL) {
    perror("Error creating output.txt");
    return;
  }
  fclose(file);

  const char *dir_path = "docs";
  int result = mkdir(dir_path, 0755);
  if (result != 0) {
    perror("Error creating docs directory");
  }
}

int main() {
  printf("Creating files and directories in the current working directory:\n");
  create(".");

  if (chdir("/") != 0) {
    perror("Error changing to the root directory");
    return EXIT_FAILURE;
  }

  printf("\nCreating files and directories in the filesystem root:\n");
  create("/");

  return EXIT_SUCCESS;
}