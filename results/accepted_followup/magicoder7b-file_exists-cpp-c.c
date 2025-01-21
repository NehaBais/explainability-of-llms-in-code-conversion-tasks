#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h> // Include this for stat function
#include <sys/types.h>

int file_exists(const char *path) {
  struct stat info;             // Declare 'struct stat' before using it
  if (stat(path, &info) != 0) { // Use correct prototype for stat function
    printf("%s does not exist\n", path);
    return 0;
  } else {
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