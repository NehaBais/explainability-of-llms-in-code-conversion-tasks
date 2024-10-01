#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int file_exists(const char *path) {
  struct stat info;
  if (stat(path, &info) != 0) { // check if it exists or not
    printf("%s does not exist\n", path);
    return 0;
  } else { // check if it's a directory or file
    if (S_ISDIR(info.st_mode))
      printf("%s is a directory\n", path);
    else
      printf("%s exists with a file size of %ld bytes.\n", path,
             (long)info.st_size);
  }
  return 1;
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("/docs/input.txt");
  file_exists("/docs/zero_length.txt");
  return 0;
}