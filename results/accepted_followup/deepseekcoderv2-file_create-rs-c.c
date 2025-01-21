#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void create_file(const char *path) {
  FILE *file = fopen(path, "w");
  if (file == NULL) {
    perror("Error creating file");
    exit(EXIT_FAILURE);
  }
  fclose(file);
}

void create_directory(const char *path) {
  int status = mkdir(path, 0755);
  if (status == -1 && errno != EEXIST) {
    perror("Error creating directory");
    exit(EXIT_FAILURE);
  }
}

int main() {
  // Create in the current working directory
  create_directory("docs");
  create_file("output.txt");

  // Create in the filesystem root
  char root_path[1024];
  if (getcwd(root_path, sizeof(root_path)) == NULL) {
    perror("Error getting current working directory");
    exit(EXIT_FAILURE);
  }
  strcat(root_path, "/docs");
  create_directory(root_path);
  strcat(root_path, "/output.txt");
  create_file(root_path);

  // Create in the filesystem root without using getcwd
  const char *root = "/";
  strcpy(root_path, root);
  strcat(root_path, "docs");
  create_directory(root_path);
  strcat(root_path, "/output.txt");
  create_file(root_path);

  return 0;
}