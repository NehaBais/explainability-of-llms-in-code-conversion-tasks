#include <stdio.h>
#include <stdlib.h>

void file_exist(const char *path, const char *type) {
  FILE *file = fopen(path, "r");

  if (file != NULL) {
    printf("%s exists", path);

    fseek(file, 0L, SEEK_END);
    long size = ftell(file);

    fclose(file);

    if (type == "directory") {
      printf(" with a file size of %ld bytes.\n", size);
    } else {
      printf("\n");
    }
  } else {
    printf("%s does not exist\n", path);
  }
}

int main() {
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) != NULL) {
    file_exist("input.txt", "file");
    file_exist("zero_length.txt", "file");

    strcpy(cwd + strlen(cwd), "/docs/");
    file_exist(cwd, "directory");

    char root[1024];
    strcpy(root, "/");
    strcpy(root + 1, cwd + 1);

    file_exist(root, "file");
  } else {
    perror("getcwd() error");
    return 1;
  }
}