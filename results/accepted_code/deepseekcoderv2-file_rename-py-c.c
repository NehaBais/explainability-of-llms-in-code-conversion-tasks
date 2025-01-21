#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // for chdir()

void rename_file(const char *oldname, const char *newname) {
  if (rename(oldname, newname) != 0) {
    perror("Error renaming file");
    exit(EXIT_FAILURE);
  }
}

int main() {
  // Rename in the current working directory
  rename_file("input.txt", "output.txt");
  rename_file("docs", "mydocs");

  // Change to the filesystem root and perform the same renames
  if (chdir("/") == 0) { // chdir to root successfully
    rename_file("input.txt", "output.txt");
    rename_file("docs", "mydocs");
  } else {
    perror("Error changing directory to root");
    exit(EXIT_FAILURE);
  }

  return 0;
}