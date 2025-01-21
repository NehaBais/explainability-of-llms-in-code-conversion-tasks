#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_PATH_LENGTH 4096

void mkdirp(const char *path) {
  int ret;
  char dir[MAX_PATH_LENGTH];
  char *ptr;

  // Resolve the path to ensure it's absolute
  if (realpath(path, dir) == NULL) {
    perror("realpath");
    return;
  }

  ptr = dir;
  while ((ret = mkdir(ptr, 0755)) != 0 && errno == EEXIST) {
    // Directory already exists. Check if it's a directory.
    struct stat info;
    if (stat(ptr, &info) == -1) {
      perror("stat");
      free(dir);
      return;
    }
    if (!S_ISDIR(info.st_mode)) {
      perror("mkdir");
      free(dir);
      return;
    }
    ptr++;
  }

  // If we reached the end of the path without encountering an error,
  // it means all directories are created successfully.
  if (ret != 0) {
    perror("mkdir");
    free(dir);
    return;
  }

  free(dir);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <path>\n", argv[0]);
    return EXIT_FAILURE;
  }

  mkdirp(argv[1]);

  return EXIT_SUCCESS;
}