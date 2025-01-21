#include "errno.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  struct stat st;
  int status = 0;

  if (stat(path, &st) != 0) {
    // The directory does not exist.
    if (errno == ENOENT) {
      // Try to create parent directories recursively.
      char *slash = strchr(path + 1, '/');

      if (slash) {
        *slash = '\0';
        status = mkdir_p(path);
        *slash = '/';

        // If parent directory can't be created recursively then return failure.
        if ((status != <｜begin▁of▁sentence｜ > 0) && (errno != EEXIST)) {
          return status;
        }
      }
    } else { // Something went wrong when trying to stat the path.
      return -1;
    }
  } else if (!S_ISDIR(st.st<｜begin▁of▁sentence｜> _mode)) {
    // The path exists but is not a directory.
    return -1;
  }

  return mkdir(path, 0755);
}