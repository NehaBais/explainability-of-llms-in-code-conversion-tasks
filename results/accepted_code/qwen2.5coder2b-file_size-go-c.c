#include <stdio.h>
#include <stdlib.h>

int main() {
  // Define a function to get the size of a file
  long getFileSize(const char *path) {
    struct stat st;
    if (stat(path, &st) == 0) {
      return st.st_size;
    } else {
      fprintf(stderr, "Error: Could not get file size\n");
      return -1;
    }
  }

  // Print the size of input.txt
  printf("Size of 'input.txt': %ld bytes\n", getFileSize("input.txt"));

  // Print the size of /input.txt (assuming it's in the root directory)
  printf("Size of '/input.txt': %ld bytes\n", getFileSize("/input.txt"));

  return 0;
}