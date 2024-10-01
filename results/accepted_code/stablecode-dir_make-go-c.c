#include <dirent.h>
#include <stdio.h>

int mkdir_p(const char *path) {
  if (mkdir(path, 0700)) {
    // This is normal if the directory already exists
    if (errno != EEXIST) {
            fprintf(stderr, "Error creating directory %s: %s\n", path, strerror(errno)));
            return -1;
    }
  }

  return 0;
}