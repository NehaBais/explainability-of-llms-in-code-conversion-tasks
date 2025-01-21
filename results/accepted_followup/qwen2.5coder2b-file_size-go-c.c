#include <stdio.h>
#include <stdlib.h>

long getFileSize(const char *path);

int main() {
  long size;

  // Print the size of input.txt
  printf("Size of 'input.txt': %ld bytes\n", size = getFileSize("input.txt"));

  // Print the size of /input.txt (assuming it's in the root directory)
  printf("Size of '/input.txt': %ld bytes\n", size = getFileSize("/input.txt"));

  return 0;
}