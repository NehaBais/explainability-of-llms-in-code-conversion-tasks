#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

int create(const char *root) {
  char *f_path = (char *)malloc(strlen(root) + strlen(FILE_NAME));
  sprintf(f_path, "%s/%s", root, FILE_NAME);
  char *d_path = (char *)malloc(strlen(root) + strlen(DIR_NAME));
  sprintf(d_path, "%s/%s", root, DIR_NAME);

  struct stat st;
  if (stat(f_path, &st) == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int result = create("/");
  printf("%d\n", result);
  free(f_path);
  free(d_path);
  return 0;
}