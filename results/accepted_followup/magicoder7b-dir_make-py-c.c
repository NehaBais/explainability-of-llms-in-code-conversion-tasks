#include <errno.h>
#include <string.h> // Add this line to include the string header file
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdirp(const char *path, mode_t mode) {
  struct stat st;
  if (stat(path, &st) == 0 && S_ISDIR(st.st_mode))
    return 0; // Dir exists

  errno = 0;
  int ret;

  // Try to make the directory
  ret = mkdir(path, mode);

  if (ret < 0) {
    if (errno == EEXIST && strchr(path, '/')) {
      char *p = strrchr(path, '/');
      ++p; // Skip trailing /
      ret = mkdirp(path, mode);
    } else {
      return -1;
    }
  }

  return 0;
}