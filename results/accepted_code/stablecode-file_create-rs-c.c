#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

const char *file_name = "output.txt";
const char *dir_name = "docs";

void create_file(const char *path) {
  FILE *fptr;
  if ((fptr = fopen(path, "w")) == NULL) {
    perror("Error opening file");
    exit(1);
  }
  fclose(fptr);
}

void create_dir(const char *path) {
  if (mkdir(path, 0)) {
    perror("Error creating directory");
    exit(1);
  }
}

int main() {
  char cwd[1024];
    getcwd(cwd, sizeof(cwd)));

    create_dir(dir_name);
    create_file(file_name);

    return 0;
}