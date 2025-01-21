#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  const char *path = "./path/to/dir";

  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    perror("An Error Occurred!");
    return EXIT_FAILURE;
  }

  printf("Directory created successfully.\n");
  return EXIT_SUCCESS;
}