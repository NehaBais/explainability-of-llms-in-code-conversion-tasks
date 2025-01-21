#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void printFileSize(char *filename) {
  struct stat st;

  if (stat(filename, &st) == -1) {
    perror("Failed to get file status");
  } else {
    printf("%llu\n", (unsigned long long)st.st<｜begin▁of▁sentence｜> _size);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}