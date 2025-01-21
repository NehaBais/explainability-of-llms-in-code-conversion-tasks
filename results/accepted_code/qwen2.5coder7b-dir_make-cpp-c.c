#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int create_directory(const char *path) {
  if (path == NULL || strlen(path) == 0) {
    fprintf(stderr, "Invalid path\n");
    return -1;
  }

  // Try to create the directory
  if (mkdir(path, 0755) == 0) {
    return 0; // Directory created successfully
  }

  // Check if the error is due to a non-existent parent directory
  if (errno != ENOENT) {
    fprintf(stderr, "Failed to create directory: %s\n", path);
    return -1;
  }

  // Create parent directories recursively
  char *p = strdup(path);
  while ((p = strchr(p + 1, '/')) != NULL) {
    *p = '\0';
    if (mkdir(path, 0755) != 0 && errno != EEXIST) {
      fprintf(stderr, "Failed to create parent directory: %s\n", path);
      free(p);
      return -1;
    }
  }

  // Finally, try to create the original directory again
  if (mkdir(path, 0755) != 0) {
    fprintf(stderr, "Failed to create final directory: %s\n", path);
    free(p);
    return -1;
  }

  free(p);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mkdir <path>\n");
    return -1;
  }

  const char *pathToCreate = argv[1];
  if (create_directory(pathToCreate) == 0) {
    printf("Directory created successfully: %s\n", pathToCreate);
  } else {
    fprintf(stderr, "Failed to create directory: %s\n", pathToCreate);
    return -1;
  }

  return 0;
}