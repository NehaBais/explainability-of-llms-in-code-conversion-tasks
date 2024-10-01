#include <stdio.h>
#include <sys/stat.h>

void printFileSize(const char *f) {
  struct stat stat;
  if (stat(f, &stat) == -1) {
    printf("Error: %s\n", strerror(errno));
  } else {
    printf("%ld\n", stat.st_size);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}