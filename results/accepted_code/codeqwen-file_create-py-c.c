#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void create(char *directory) {
  char output_file[64] = "";
  strcat(output_file, directory);
  strcat(output_file, "/output.txt");

  FILE *fp = fopen(output_file, "w");
  fclose(fp);

  char docs_dir[64] = "";
  strcat(docs_dir, directory);
  strcat(docs_dir, "/docs");
  mkdir(docs_dir, 0777);
}

int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}