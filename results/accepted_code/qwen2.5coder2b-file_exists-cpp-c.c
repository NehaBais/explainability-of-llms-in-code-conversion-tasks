#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

void file_exists(const char *path) {
  FILE *file;
  long size;

  // Check if the path exists as a file.
  file = fopen(path, "r");
  if (file == NULL) {
    printf("%s does not exist\n", path);
    return;
  }
  fclose(file);

  // If it is a file and has zero size, print that it is a directory.
  if ((size = getFileSize(path)) == 0) {
    printf("%s exists with a file size of 0 bytes.\n", path);
  } else {
    printf("%s is a directory\n", path);
  }
}

long getFileSize(const char *path) {
  struct stat st;
  if (stat(path, &st) != 0)
    return -1; // Error
  return st.st_size;
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("docs/input.txt");
  file_exists("docs/zero_length.txt");
  return 0;
}