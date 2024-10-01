#include <stdio.h>    // for printf() function
#include <stdlib.h>   // for exit() function
#include <sys/stat.h> // for stat() function, to check if file or directory exists
#include <unistd.h> // for realpath() function, to get the absolute path of a file/directory

void file_exists(const char *path) {
  struct stat stats;
  if (stat(path, &stats) == -1) {
    printf("%s does not exist\n", path);
    return;
  }

  // if it is a directory
  if (S_ISDIR(stats.st_mode)) {
    printf("%s is a directory\n", path);
  } else { // otherwise, it's a file
    size_t bytes = stats.st_size;
    printf("%s exists with a file size of %zu bytes.\n", path, bytes);
  }
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("/docs/input.txt");
  file_exists("/docs/zero_length.txt");

  return 0;
}