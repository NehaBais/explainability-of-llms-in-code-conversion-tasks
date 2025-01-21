#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
  if (mkdir(path, 0755) == -1) {
    // If the directory already exists, errno will be set to EEXIST
    if (errno != EEXIST) {
      perror("mkdir");
      exit(EXIT_FAILURE);
    }
  }
}

int main() {
  const char *dir = "./path/to/dir";
  mkdirp(dir);
  return 0;
}