#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdirp(const char *path) {
  int status = 0;
  size_t len = strlen(path);

  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      status = mkdir(path, 0755);
      if (status == -1 && errno != EEXIST) {
        return status;
      }
    }
  }

  return status;
}

int main() {
  // Create directory ./path/to/dir
  int status = mkdirp("./path/to/dir");

  if (status == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory: %s\n", strerror(errno));
  }

  return 0;
}