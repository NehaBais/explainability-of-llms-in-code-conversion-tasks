#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdir_p(const char *path) {
  // Create a mutable copy of the path to work with
  char *mutablePath = strdup(path);
  if (!mutablePath) {
    perror("strdup");
    return -1;
  }

  // Start from the root and iterate through each component in the path
  for (char *p = mutablePath + 1; *p != '\0'; ++p) {
    if (*p == '/') {
      // Null-terminate the current segment
      *p = '\0';

      // Create the directory if it does not exist
      if (access(mutablePath, F_OK) != 0) {
        if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
          perror("mkdir");
          free(mutablePath);
          return -1;
        }
      }

      // Restore the null-terminator for the next segment
      *p = '/';
    }
  }

  // Finally, create the last segment if it does not exist
  if (access(mutablePath, F_OK) != 0) {
    if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
      perror("mkdir");
      free(mutablePath);
      return -1;
    }
  }

  // Clean up memory
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