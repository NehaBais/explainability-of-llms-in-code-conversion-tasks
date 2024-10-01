#include <stdio.h>
#include <stdlib.h>

void rename_files_and_dirs_in_current_dir() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Error renaming input.txt");
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Error renaming docs directory");
  }
}

void rename_files_and_dirs_in_root_dir() {
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Error renaming /input.txt");
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror("Error renaming /docs directory");
  }
}

int main() {
  rename_files_and_dirs_in_current_dir();
  rename_files_and_dirs_in_root_dir();

  return 0;
}