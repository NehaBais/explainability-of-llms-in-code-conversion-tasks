#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void create(const char *directory) {
  FILE *file = fopen(directory "/output.txt", "w");
  if (file == NULL) {
    perror("fopen");
    exit(EXIT_FAILURE);
  }
  fclose(file);
  mkdir(directory "/docs", 0777);
}

int main() {
  create(".");
  create("/");
  return 0;
}