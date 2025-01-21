#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rename_file(const char *old_name, const char *new_name) {
  if (rename(old_name, new_name) != 0) {
    perror("Error renaming file");
    exit(EXIT_FAILURE);
  }
}

int main() {
  // Here in the current working directory
  rename_file("input.txt", "output.txt");
  rename_file("docs", "mydocs");

  // In the filesystem root
  char *root_path = "/";
  char path[1024]; // Buffer to hold full path
  strcpy(path, root_path);
  strcat(path, "input.txt");
  rename_file(path, strcat(path, "_output"));

  strcpy(path, root_path);
  strcat(path, "docs");
  rename_file(path, strcat(path, "_mydocs"));

  return EXIT_SUCCESS;
}