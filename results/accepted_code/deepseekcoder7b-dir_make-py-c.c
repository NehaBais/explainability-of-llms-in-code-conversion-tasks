#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  struct stat st;
  int status = 0;

  if (stat(path, &st) != 0) {
    if (mkdir(path, 0755) == -1) {
      perror("Error creating directory");
      return 1;
    }
  } else if (!S_ISDIR(st.st_mode)) {
    errno = ENOTDIR;
    perror("Path exists but is not a directory");
    return 1;
  }

  return status;
}