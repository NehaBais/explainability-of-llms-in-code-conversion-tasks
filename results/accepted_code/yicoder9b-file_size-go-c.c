#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void printFileSize(char *f) {
  struct stat buf;
  if (stat(f, &buf) == 0) {
    printf("%ld\n", buf.st_size);
  } else {
    perror(f);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}