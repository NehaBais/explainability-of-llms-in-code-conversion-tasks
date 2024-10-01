#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
  char cwd[1024];
  getcwd(cwd, sizeof(cwd));
  size_t len = strlen(path);

  // check if the directory exists
  struct stat s;
  int status = lstat(path, &s);

  if (status != 0) {
    // create a new directory
    mkdir(path, 0755);
  } else if (S_ISDIR(s.st_mode)) {
    // it's an existing directory, do nothing
    return;
  }
}