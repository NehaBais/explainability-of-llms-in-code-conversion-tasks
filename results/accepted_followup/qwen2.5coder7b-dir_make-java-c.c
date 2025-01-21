#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h> // Include this header for mkdir declaration

int create_directory(const char *path) {
  char dir[256];
  const char *p = path;

  while (*p != '\0') {
    if (*p == '/' || *p == '\\') {
      strncpy(dir, path, p - path + 1);
      dir[p - path + 1] = '\0';

      if (mkdir(dir, 0755) == -1 && errno != EEXIST) {
        perror("mkdir");
        return EXIT_FAILURE;
      }
    }
    p++;
  }

  // Create the final directory
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    perror("mkdir");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}

int main() {
  const char *path = "C:/parent/test";
  if (create_directory(path) == EXIT_SUCCESS)
    printf("path successfully created\n");
  else
    printf("Failed to create path\n");

  return 0;
}