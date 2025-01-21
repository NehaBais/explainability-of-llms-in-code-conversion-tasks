#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void file_exists(const char *path) {
  struct stat path_stat;
  if (stat(path, &path_stat) == 0) {
    printf("%s", path);
    if (S_ISDIR(path_stat.st_mode)) {
      printf(" is a directory\n");
    } else {
      printf(" exists with a file size of %ld bytes.\n", path_stat.st_size);
    }
  } else {
    printf("%s does not exist\n", path);
  }
}

int main() {
  char path[256];

  // For the current working directory
  strcpy(path, "input.txt");
  file_exists(path);
  strcpy(path, "zero_length.txt");
  file_exists(path);
  strcpy(path, "docs/input.txt");
  file_exists(path);
  strcpy(path, "docs/zero_length.txt");
  file_exists(path);

  // For the filesystem root
  strcpy(path, "/input.txt");
  file_exists(path);
  strcpy(path, "/zero_length.txt");
  file_exists(path);
  strcpy(path, "/docs/input.txt");
  file_exists(path);
  strcpy(path, "/docs/zero_length.txt");
  file_exists(path);

  return 0;
}