#include <stdio.h>
#include <sys/stat.h>

void check_file_and_directory(const char *path) {
  struct stat buffer;
  if (stat(path, &buffer) == 0) {
    printf("Path '%s' exists.\n", path);
  } else {
    printf("Path '%s' does not exist or an error occurred.\n", path);
  }
}

int main() {
  // Current working directory
  check_file_and_directory("./docs/input.txt");
  check_file_and_directory("/docs/input.txt");

  return 0;
}