#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  const char *file_name = "output.txt";
  const char *dir_name = "docs";

  // Create file in current working directory
  FILE *f = fopen(file_name, "w");
  if (!f) {
    perror("Error creating output.txt");
    exit(1);
  }
  fclose(f);

  // Create directory at root
  const char *root = "/";
  const size_t dir_path_len = strlen(root) + 1 + strlen(dir_name);
  char full_dir_path[dir_path_len];
  snprintf(full_dir_path, sizeof(full_dir_path), "%s%s", root, dir_name);

  if (mkdir(full_dir_path, 0755) != 0) {
    perror("Error creating docs");
    exit(1);
  }
}