#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void printFileSize(const char *filename) {
  struct stat st;
  if (stat(filename, &st) == -1) {
    perror("Error");
  } else {
    printf("%zu\n", st.st_size);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}