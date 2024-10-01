#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
int mkdirp(const char *path) {
  struct stat st;
  if (stat(path, &st) != 0) {
    mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  }
  return 0;
}