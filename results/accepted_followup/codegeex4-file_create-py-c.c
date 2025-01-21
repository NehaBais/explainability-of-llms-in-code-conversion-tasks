#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void create(const char *directory) {
  char filepath[1024];
  snprintf(filepath, sizeof(filepath), "%s/output.txt", directory);
  FILE *fp = fopen(filepath, "w");
  if (fp == NULL) {
    perror("Error creating file");
    exit(1);
  }
  fclose(fp);

  snprintf(filepath, sizeof(filepath), "%s/docs", directory);
  int status = mkdir(filepath, 0755);
  if (status != 0) {
    perror("Error creating directory");
    exit(1);
  }
}

int main() {
  create(".");
  create("/");

  return 0;
}