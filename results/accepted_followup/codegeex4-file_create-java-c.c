#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  // Create file and directory in current working directory.
  FILE *file = fopen("output.txt", "w");
  if (file == NULL) {
    perror("Failed to create file");
    return EXIT_FAILURE;
  }
  fclose(file);

  int dir_created = mkdir("docs", 0777);
  if (dir_created != 0 && errno != EEXIST) {
    perror("Failed to create directory");
    return EXIT_FAILURE;
  }

  // Create file and directory in filesystem root.
  char *root_dir = "/output.txt";
  FILE *file_root = fopen(root_dir, "w");
  if (file_root == NULL) {
    perror("Failed to create file in root directory");
    return EXIT_FAILURE;
  }
  fclose(file_root);

  dir_created = mkdir("/docs", 0777);
  if (dir_created != 0 && errno != EEXIST) {
    perror("Failed to create directory in root directory");
    return EXIT_FAILURE;
  }

  printf("Files and directories created successfully.\n");

  return EXIT_SUCCESS;
}