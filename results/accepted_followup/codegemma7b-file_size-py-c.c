#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat s;

  if (stat("input.txt", &s) == 0) {
    printf("Size of input.txt in current working directory: %lld bytes\n",
           s.st_size);
  }

  if (stat("/input.txt", &s) == 0) {
    printf("Size of input.txt in file system root: %lld bytes\n", s.st_size);
  }

  return 0;
}