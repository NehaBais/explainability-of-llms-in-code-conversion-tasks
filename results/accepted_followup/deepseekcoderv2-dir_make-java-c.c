#include <errno.h> // for errno
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h> // for stat and S_ISDIR
#include <unistd.h>   // for mkdir and access functions

// Function to create a directory and any missing parents
int make_directory(const char *path) {
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    perror("Error creating directory");
    return EXIT_FAILURE;
  }

  // Check if the path already exists and is a directory
  struct stat sb;
  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    printf("Path successfully created\n");
    return EXIT_SUCCESS;
  } else {
    fprintf(stderr, "Failed to create directory: %s\n", path);
    return EXIT_FAILURE;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <path>\n", argv[0]);
    return EXIT_FAILURE;
  }

  const char *path = argv[1];
  if (make_directory(path) == EXIT_SUCCESS) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}