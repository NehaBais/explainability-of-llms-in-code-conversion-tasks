#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Function to create a directory and any missing parent directories
int mkdir_p(const char *path) {
  // Create a temporary copy of the path since strncpy doesn't add null
  // terminator if source is shorter
  char *temp_path = (char *)malloc(strlen(path) + 1);
  if (!temp_path) {
    perror("Failed to allocate memory");
    return -1;
  }
  strcpy(temp_path, path);

  // Check and create parent directories
  for (char *p = temp_path + 1; *p != '\0'; ++p) {
    if (*p == '/' && p != temp_path) {
      *p = '\0';
      if (mkdir(temp_path, S_IRWXU | S_IRWXG | S_IRWXO) == -1 &&
          errno != EEXIST) {
        free(temp_path);
        return -1;
      }
      *p = '/';
    }
  }

  // Create the final directory
  if (mkdir(temp_path, S_IRWXU | S_IRWXG | S_IRWXO) == -1 && errno != EEXIST) {
    free(temp_path);
    return -1;
  }

  free(temp_path);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
    return EXIT_FAILURE;
  }

  if (mkdir_p(argv[1]) == -1) {
    perror("Failed to create directory");
    return EXIT_FAILURE;
  } else {
    printf("Directory created successfully.\n");
    return EXIT_SUCCESS;
  }
}