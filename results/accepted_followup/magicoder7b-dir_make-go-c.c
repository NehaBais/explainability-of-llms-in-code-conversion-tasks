#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int create_dir(char *path, mode_t mode) {
  struct stat st;
  char *p = strdup(path);
  char *pp = NULL;
  if (stat(path, &st) != 0) {
    return mkdir(path, mode);
  }
  // The directory already exists
  printf("Directory %s already exists\n", path);
  return 0;
}

int main() {
  create_dir("/tmp/some/path/to/dir", 0770);
  return 0;
}