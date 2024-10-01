#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdirp(const char *path) {
  size_t len = strlen(path);
  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      path[i] = '\0';
      if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        return -1;
      }
      path[i] = '/';
    }
  }
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    return -1;
  }
  return 0;
}

int main() {
  // Create directory ./path/to/dir
  int result = mkdirp("./path/to/dir");

  if (result == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory.\n");
  }

  return 0;
}