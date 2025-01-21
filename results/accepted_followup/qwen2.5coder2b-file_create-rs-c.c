#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/statvfs.h>
#include <unistd.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

int main() {
  if (create(".", 0) != 0 || create("/", 0) != 0) {
    fprintf(stderr, "Error: Failed to create output and docs directories.\n");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

int create(const char *root, int size) {
  char fpath[512];
  char dpath[512];

  snprintf(fpath, sizeof(fpath), "%s/%s", root, FILE_NAME);
  snprintf(dpath, sizeof(dpath), "%s/%s", root, DIR_NAME);

  if (access(root, R_OK) == 0 && access(root, W_OK) == 0) {
    return 0;
  }

  if (mkdir(fpath, 0644) != 0 && mkdir(dpath, 0755) != 0) {
    fprintf(stderr, "Error: Failed to create directories.\n");
    return -1;
  }
  return 0;
}