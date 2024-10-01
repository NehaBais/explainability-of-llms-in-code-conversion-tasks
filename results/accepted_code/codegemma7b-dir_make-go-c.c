#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdirp(const char *path, mode_t mode) {
  size_t len = strlen(path);
  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      path[i] = '\0';
      if (mkdir(path, mode) == -1 && errno != EEXIST) {
        return -1;
      }
      path[i] = '/';
    }
  }
  if (mkdir(path, mode) == -1 && errno != EEXIST) {
    return -1;
  }
  return 0;
}

int main() {
  char path[] = "/tmp/some/path/to/dir";
  int status = mkdirp(path, 0770);
  if (status == 0) {
    // Directory created successfully
  } else {
    // Error creating directory
  }
  return 0;
}