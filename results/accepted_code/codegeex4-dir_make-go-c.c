#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

void mkdir_p(const char *path) {
  char buffer[1024];
  size_t len = 0;
  const char *p;

  for (p = path; *p != '\0'; p++) {
    buffer[len++] = *p;
    if (*p == '/') {
      /* Check and create the directory */
      buffer[len] = '\0';
      struct stat info;
      if (stat(buffer, &info) != 0) {
        /* Directory does not exist; create it */
        if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
          perror("Error creating directory");
          exit(EXIT_FAILURE);
        }
      } else if (!S_ISDIR(info.st_mode)) {
        /* There's already a file with the same name */
        fprintf(stderr, "Not a directory: %s\n", buffer);
        exit(EXIT_FAILURE);
      }
    }
  }

  // Create the last part of the path
  struct stat info;
  if (stat(path, &info) != 0) {
    /* Directory does not exist; create it */
    if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
      perror("Error creating directory");
      exit(EXIT_FAILURE);
    }
  } else if (!S_ISDIR(info.st_mode)) {
    /* There's already a file with the same name */
    fprintf(stderr, "Not a directory: %s\n", path);
    exit(EXIT_FAILURE);
  }
}

int main() {
  mkdir_p("/tmp/some/path/to/dir");
  return 0;
}