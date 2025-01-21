#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdir_p(const char *path, mode_t mode) {
  char *next = NULL;
  char *current = strdup(path);
  while ((next = strchr(current, '/')) != NULL) {
    *next = '\0';
    if (mkdir(current, mode) == -1)
      goto out;
    *next = '/';
    while (*++next)
      ;
  }
  if (mkdir(current, mode) == -1)
    goto out;
  return 0;
out:
  free(current);
  return -1;
}

int main() { return mkdir_p("/tmp/some/path/to/dir", 0770); }