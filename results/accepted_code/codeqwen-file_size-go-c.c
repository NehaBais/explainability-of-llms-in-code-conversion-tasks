#include <stdio.h>
#include <sys/stat.h>

void printFileSize(char *f) {
  struct stat st;
  if (stat(f, &st) == -1) {
    perror("Error getting file size");
  } else {
    printf("%ld\n", st.st_size);
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}