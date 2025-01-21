#include <stdio.h>
#include <stdlib.h>

void rename_file(const char *oldname, const char *newname) {
  if (rename(oldname, newname) != 0) {
    perror("Error renaming file");
    exit(EXIT_FAILURE);
  }
}

int main() {
  rename_file("input.txt", "output.txt");
  rename_file("docs", "mydocs");
  rename_file("/input.txt", "/output.txt");
  rename_file("/docs", "/mydocs");
  return 0;
}