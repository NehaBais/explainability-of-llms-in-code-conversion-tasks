#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void file_exists(const char *path) {
  printf("%s", path);
  struct stat buffer;
  if (stat(path, &buffer) == 0) {
    if (S_ISDIR(buffer.st_mode)) {
      printf(" is a directory\n");
    } else if (S_ISREG(buffer.st_mode)) {
      printf(" exists with a file size of %ld bytes.\n", buffer.st_size);
    }
  } else {
    printf(" does not exist\n");
  }
}

int main() {
  file_exists("./input.txt");
  file_exists("/zero_length.txt"); // Assuming 'zero_length.txt' is in the root
                                   // directory
  file_exists("./docs/input.txt");
  file_exists("/docs/zero_length.txt"); // Assuming 'zero_length.txt' is in the
                                        // '/docs' directory in the root

  return 0;
}