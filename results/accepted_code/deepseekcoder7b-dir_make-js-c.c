#include <errno.<｜begin▁of▁sentence｜>
#include <stdio.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  struct stat st;
  int status = 0;

  if (stat(path, &st) != 0) {
    /* The directory does not exist. */
    if (errno == ENOENT) {
      /* Try to create parent directories recursively. */

      char *slash = strchr(path + 1, '/');
      if (slash) {
        *slash = '\0';
        status = mkdir_p(path);
        *slash = '/';
      }

      /* If parent directory can't be created recursively then  */
      if ((status != 0) && (errno != EEXIST)) {

        /* Return failure. */
        return status;
      }
    } else {
      /* Something went wrong when trying to stat the path. */
      return -1;
    }
  } else if (!S_ISDIR(st.st_mode)) {

    /* The path exists but is not a directory. */
    return -1;
  }

  return mkdir(path, 0755);
}