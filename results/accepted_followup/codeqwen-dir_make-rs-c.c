#include <errno.h>
#include <stdio.h>
#include <stdlib.h> // Include this header to fix the error
#include <string.h>
#include <sys/stat.h>

void create_directory(const char *path) {
  int ret = mkdir(path, 0777);
  if (ret == -1 && errno != EEXIST) {
    fprintf(stderr, "Failed to create directory '%s': %s\n", path,
            strerror(errno));
    exit(EXIT_FAILURE); // Include exit and EXIT_FAILURE here
  }
}

int main() {
  create_directory("./path/to/dir");
  return 0;
}