#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void create_directory(const char *path) {
  int ret =
      mkdir(path, 0777); // 0777 is the default permissions for a directory
  if (ret == -1 && errno != EEXIST) {
    fprintf(stderr, "Failed to create directory '%s': %s\n", path,
            strerror(errno));
    exit(EXIT_FAILURE);
  }
}

int main() {
  create_directory("./path/to/dir");
  return 0;
}