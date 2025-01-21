#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  // Check if the directory already exists
  struct stat sb;
  if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    return 0; // Directory already exists
  }

  // Create parent directories recursively
  char *copy = strdup(path);
  if (!copy) {
    perror("strdup");
    return -1;
  }

  for (char *p = copy + 1; *p != '\0'; ++p) {
    if (*p == '/') {
      *p = '\0';
      if (mkdir(copy, S_IRWXU) != 0 && errno != EEXIST) {
        free(copy);
        perror("mkdir");
        return -1;
      }
      *p = '/';
    }
  }

  // Create the last directory in the path
  if (mkdir(copy, S_IRWXU) != 0 && errno != EEXIST) {
    free(copy);
    perror("mkdir");
    return -1;
  }

  free(copy);
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: %s <path>\n", argv[0]);
    return -1;
  }

  if (mkdir_p(argv[1]) == 0) {
    printf("Directory created successfully.\n");
  } else {
    perror("mkdir_p");
    return -1;
  }

  return 0;
}