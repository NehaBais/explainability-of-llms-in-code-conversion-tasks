#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void printFileSize(const char *f) {
  struct stat buf;
  if (stat(f, &buf) == 0) {
    printf("%ld\n", buf.st_size);
  } else {
    perror("Error getting file size");
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}