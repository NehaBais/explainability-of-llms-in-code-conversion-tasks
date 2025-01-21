#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
  const size_t len = strlen(path);
  char _path[256];
  char *p = NULL;

  snprintf(_path, sizeof(_path), "%s", path);
  if (_path[len - 1] == '/') {
    _path[len - 1] = 0;
  }

  for (p = _path + 1; *p; p++) {
    if (*p == '/') {
      *p = '\0';
      if (mkdir(_path, 0755) != 0 && errno != EEXIST) {
        perror("Error creating directory");
        return;
      }
      *p = '/';
    }
  }

  // Create the final directory
  if (mkdir(path, 0755) != 0 && errno != EEXIST) {
    perror("Error creating directory");
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}