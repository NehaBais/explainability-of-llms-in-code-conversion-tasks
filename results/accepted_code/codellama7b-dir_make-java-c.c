#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void mkdir_p(char *path) {
  struct stat st;
  if (stat(path, &st) == 0) {
    // Directory exists
    return;
  } else if (errno == ENOENT) {
    // Parent directory does not exist
    char *parent_dir = strdup(path);
    char *last_slash = strrchr(parent_dir, '/');
    if (last_slash != NULL) {
      last_slash[0] = '\0';
      mkdir_p(parent_dir);
      free(parent_dir);
      mkdir(path, 0755);
    } else {
      perror("mkdir");
    }
  } else {
    perror("stat");
  }
}