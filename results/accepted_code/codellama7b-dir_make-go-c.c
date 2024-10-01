#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int MkdirAll(const char *path, mode_t mode) {
  struct stat st;
  int rc = 0;

  if (stat(path, &st) == -1) {
    // Create the directory and all its missing parents recursively.
    rc = mkdir(path, mode);
  } else if (!S_ISDIR(st.st_mode)) {
    errno = ENOTDIR;
    return -1;
  }

  return rc;
}