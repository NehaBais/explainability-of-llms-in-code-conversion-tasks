#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strrchr, strlen and strncpy
#include <sys/stat.h>
#include <unistd.h>

// Create directory and its parent directories if they don't exist
int create_dir(char *path) {
  char *p = strrchr(
      path, '/'); // Find the last slash in the path (parent directories)

  mkdir(path, 0755);

  return 0;
}