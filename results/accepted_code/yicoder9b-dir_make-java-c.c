#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

int createDirectory(const char *path) {
  struct stat st;
  mode_t mode = 0755; // default file permissions, change as needed

  if (stat(path, &st) == 0) // path already exists
    return 1;

  if (errno != ENOENT || mkdir(path, mode) < 0) {
    perror("Error creating directory: ");
    return -1; // error occurred
  } else
    return 1; // Directory created successfully.
}