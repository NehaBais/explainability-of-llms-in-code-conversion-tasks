#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void printFileSize(char *f) {
  struct stat st;
  if (stat(f, &st) == 0) {
    printf("%ld\n", (long int)st.st_size);
  } else {
    perror("stat");
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}