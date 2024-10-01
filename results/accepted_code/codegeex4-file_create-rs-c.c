#include <stdio.h>
#include <sys/stat.h>

const char *FILE_NAME = "output.txt";
const char *DIR_NAME = "docs";

void create(const char *root) {
  char file_path[100], dir_path[100];

  sprintf(file_path, "%s/%s", root, FILE_NAME);
  sprintf(dir_path, "%s/%s", root, DIR_NAME);

  if (mkdir(dir_path, 0777) != 0)
    perror("Error creating directory");

  FILE *fp = fopen(file_path, "w");

  if (fp == NULL)
    perror("Error creating file");

  fclose(fp);
}

int main() {
  create(".");
  create("/");

  return 0;
}