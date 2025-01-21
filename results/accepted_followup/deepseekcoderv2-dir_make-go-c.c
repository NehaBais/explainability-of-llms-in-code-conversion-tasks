#include <errno.h> // Include this header for errno
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdir_p(const char *path) {
  char *mutablePath = strdup(path);
  if (!mutablePath) {
    perror("strdup");
    return -1;
  }

  for (char *p = mutablePath + 1; *p != '\0'; ++p) {
    if (*p == '/') {
      *p = '\0';
      if (access(mutablePath, F_OK) != 0) {
        if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
          perror("mkdir");
          free(mutablePath);
          return -1;
        }
      }
      *p = '/';
    }
  }

  if (access(mutablePath, F_OK) != 0) {
    if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
      perror("mkdir");
      free(mutablePath);
      return -1;
    }
  }

  free(mutablePath);
  return 0;
}

int main() {
  if (mkdir_p("/tmp/some/path/to/dir") != 0) {
    fprintf(stderr, "Failed to create directory\n");
    return EXIT_FAILURE;
  } else {
    printf("Directory created successfully\n");
    return EXIT_SUCCESS;
  }
}