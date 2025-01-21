#include <stdio.h>
#include <stdlib.h>

int create_directory(const char *path) {
  int status = mkdir(path, 0755);
  if (status == -1) {
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