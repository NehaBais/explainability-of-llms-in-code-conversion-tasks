#include <stdio.h>
#include <sys/stat.h>

void printFileSize(const char *f) {
  struct stat buffer;

  if (stat(f, &buffer) == -1) {
    perror("Error");
  } else {
    printf("%lld\n", (long long)buffer.st_size);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}