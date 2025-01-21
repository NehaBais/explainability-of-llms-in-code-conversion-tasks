#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

#define DIR_PATH "/path/to/directory"
#define FILE_NAME "input.txt"

void rename_files() {
  char current_dir[1024];
  getcwd(current_dir, sizeof(current_dir));

  // Rename the file in the current directory
  if (rename(FILE_NAME, "output.txt") != 0) {
    perror("Error renaming file");
    exit(EXIT_FAILURE);
  }

  printf("File renamed to output.txt successfully.\n");

  // Create a path for the root directory
  char root_dir[1024];
  snprintf(root_dir, sizeof(root_dir), "/%s/%s", DIR_PATH, FILE_NAME);

  // Rename the file in the root directory
  if (rename(root_dir, "mydocs") != 0) {
    perror("Error renaming file");
    exit(EXIT_FAILURE);
  }

  printf("File renamed to mydocs successfully.\n");

  // Optionally, you can create the directory if it doesn't exist
  char dir_path[1024];
  snprintf(dir_path, sizeof(dir_path), "/%s/mydocs", DIR_PATH);

  if (mkdir(dir_path, 0755) != 0 && errno != EEXIST) {
    perror("Error creating directory");
    exit(EXIT_FAILURE);
  }

  printf("Directory created successfully.\n");
}

int main() {
  rename_files();
  return 0;
}