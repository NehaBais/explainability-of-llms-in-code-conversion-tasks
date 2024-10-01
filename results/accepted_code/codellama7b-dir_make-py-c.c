#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int mkdirp(const char *path) {
  struct stat sb;
  int rc = 0;

  if (stat(path, &sb) == -1) {
    // The directory does not exist, create it
    rc = mkdir(path, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  } else if (!S_ISDIR(sb.st_mode)) {
    // The path exists but it's not a directory
    rc = ENOTDIR;
  } else {
    // The directory already exists, do nothing
    rc = 0;
  }

  return rc;
}