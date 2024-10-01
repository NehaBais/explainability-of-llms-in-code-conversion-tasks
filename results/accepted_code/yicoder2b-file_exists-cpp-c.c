#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void file_exists(const char *path) {
  struct stat buffer;
  if (stat(path, &buffer) == 0) {
    if (S_ISDIR(buffer.st_mode)) {
      printf("%s is a directory\n", path);
    } else {
      printf("exists with a file size of %ld bytes.\n", buffer.st_size);
    }
  } else {
    printf("does not exist\n");
  }
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("/docs/input.txt");
  file_exists("/docs/zero_length.txt");
}