#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void print_file_size(const char *filename) {
  struct stat buf;
  if (stat(filename, &buf) == 0) {
    printf("Size of file %s is %ld bytes\n", filename, buf.st_size);
  } else {
    perror("Error getting file size");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
}