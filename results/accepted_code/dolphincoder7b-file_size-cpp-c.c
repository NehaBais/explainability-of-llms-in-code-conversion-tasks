#include <dirent.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <sys/stat.h>

void print_file_size(const char *filename) {
  struct stat st;

  if (stat(filename, &st) != -1) {
    printf("Size of file %s is %ld bytes.\n", filename, (long)st.st_size);
  } else {
    perror(filename);
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");

  return 0;
}