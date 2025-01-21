#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

extern int errno;

void create_directory_and_parents(const char *pathname) {
  char buffer[1024];
  const char delimiter = '/';
  size_t len;
  char *p;

  if (pathname == NULL)
    return;

  len = strlen(pathname);
  if (len >= sizeof(buffer)) {
    fprintf(stderr, "Pathname is too long\n");
    exit(EXIT_FAILURE);
  }

  strcpy(buffer, pathname);

  for (p = buffer + 1; *p != '\0'; p++) {
    if (*p == delimiter) {
      *p = '\0';
      if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) < 0 &&
          errno != EEXIST) {
        perror("An error occurred while creating directories");
        exit(EXIT_FAILURE);
      }
      *p = delimiter;
    }
  }

  // create the last directory in path
  if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) < 0 &&
      errno != EEXIST) {
    perror("An error occurred while creating directories");
    exit(EXIT_FAILURE);
  }
}

int main() {
  create_directory_and_parents("./path/to/dir");
  return 0;
}