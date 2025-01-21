#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void create_file(const char *filename) {
  FILE *f = fopen(filename, "w");
  if (f == NULL) {
    perror("Error opening file");
    return;
  }
  fclose(f);
  printf("File %s created!\n", filename);
}

void create_dir(const char *dirname) {
  if (mkdir(dirname, 0755) == -1) {
    perror("Error creating directory");
  } else {
    printf("Directory %s created!\n", dirname);
  }
}

int main() {
  create_file("input.txt");
  create_file("/input.txt");
  create_dir("docs");
  create_dir("/docs");
  return 0;
}