#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

void mkdirp(const char *path) {
  const char *sep = "/";
#ifdef _WIN32
  sep = "\\";
#endif

  char resolved_path[4096];
  strcpy(resolved_path, path);
  char *parent = resolved_path;

  while (1) {
    parent = strchr(parent + 1, *sep);
    if (!parent) {
      break;
    }
    *parent = '\0';
#ifdef _WIN32
    if (_mkdir(resolved_path) == -1) {
#else
    if (mkdir(resolved_path, 0755) == -1) {
#endif
      perror("mkdir");
      exit(EXIT_FAILURE);
    }
    *parent = *sep;
  }

#ifdef _WIN32
  if (_mkdir(path) == -1) {
#else
  if (mkdir(path, 0755) == -1) {
#endif
    perror("mkdir");
    exit(EXIT_FAILURE);
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}