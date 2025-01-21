#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void print_stat(const char *path) {
  struct stat info;

  if (stat(path, &info) != 0) {
    perror("Error");
  } else if (S_ISDIR(info.st_mode)) {
    printf("%s is a directory\n", path);
  } else {
    printf("%s is a file\n", path);
  }
}

int main() {
  print_stat("input.txt");
  print_stat("/input.txt");
  print_stat("docs");
  print_stat("/docs");

  return 0;
}