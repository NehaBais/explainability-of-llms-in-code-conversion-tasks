#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

int main() {
  create(".") && create("/");
  return 0;
}

bool create(const char *root) {
  char *f_path = (char *)malloc(strlen(root) + strlen(FILE_NAME));
  sprintf(f_path, "%s/%s", root, FILE_NAME);
  char *d_path = (char *)malloc(strlen(root) + strlen(DIR_NAME));
  sprintf(d_path, "%s/%s", root, DIR_NAME);

  struct stat st;
  if (stat(f_path, &st) == 0 && S_ISREG(st.st_mode)) {
    // File exists and is a regular file
    return true;
  } else {
    // Create the file
    FILE *fp = fopen(f_path, "w");
    if (fp == NULL) {
      perror("fopen");
      free(f_path);
      free(d_path);
      return false;
    }
    fclose(fp);
  }

  if (stat(d_path, &st) == 0 && S_ISDIR(st.st_mode)) {
    // Directory exists and is a directory
    return true;
  } else {
    // Create the directory
    int result = mkdir(d_path);
    if (result != 0) {
      perror("mkdir");
      free(f_path);
      free(d_path);
      return false;
    }
  }

  free(f_path);
  free(d_path);
  return true;
}