#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void file_exists(const char *path) {
  struct stat st;
  printf("%s", path);
  if (stat(path, &st) == 0) {
    if (S_ISDIR(st.st_mode)) {
      printf(" Is a directory\n");
    } else if (S_ISREG(st.st_mode)) {
      printf(" exists with a file size of %ld bytes.\n", st.st_size);
    }
  } else {
    perror("Unable to access file");
    printf(" does not exist\n");
  }
}

int main() {
  file_exists("./input.txt");
  file_exists("zero_length.txt");
  file_exists("/docs/input.txt");
  file_exists("/docs/zero_length.txt");

  return 0;
}