#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void mkdirp(const char *path, void (*callback)(int)) {
  struct stat sb;
  int ret = 0;

  if (stat(path, &sb) == -1) {
    // The directory does not exist, create it and its parents.
    ret = mkdir(path, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  } else if (sb.st_mode & S_IFDIR) {
    // The directory exists, return successfully.
    callback(0);
  } else {
    // The path is not a directory, error out.
    fprintf(stderr, "mkdirp: %s: Not a directory\n", path);
    callback(-1);
  }
}