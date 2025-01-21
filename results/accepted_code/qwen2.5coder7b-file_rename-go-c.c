#include <stdio.h>
#include <stdlib.h>

void rename_file_or_directory(const char *old_name, const char *new_name) {
  if (rename(old_name, new_name) == -1) {
    perror("Error renaming file or directory");
    exit(EXIT_FAILURE);
  }
}

int main() {
  // Current working directory
  rename_file_or_directory("input.txt", "output.txt");
  rename_file_or_directory("docs", "mydocs");

  // Filesystem root
  rename_file_or_directory("/input.txt", "/output.txt");
  rename_file_or_directory("/docs", "/mydocs");

  return 0;
}