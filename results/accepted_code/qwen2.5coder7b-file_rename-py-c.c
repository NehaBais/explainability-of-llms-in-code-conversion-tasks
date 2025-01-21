#include <stdio.h>
#include <stdlib.h>

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
  char *root_path = "/"; // Note: You need appropriate permissions to perform
                         // this on a filesystem root.
  rename_file(strcat(root_path, "input.txt"), strcat(root_path, "output.txt"));
  rename_file(strcat(root_path, "docs"), strcat(root_path, "mydocs"));

  return EXIT_SUCCESS;
}