#include <stdio.h>

long getFileSize(char *filename) {
  FILE *f = fopen(filename, "r");
  if (!f)
    return -1; // Return error if the file can't be opened

  fseek(f, 0, SEEK_END); // Set position indicator to end of file
  long size = ftell(f);  // Get current position which is size of file

  fclose(f); // Always close the file after you are done with it.

  return size;
}

int main() {
  printf("Size of input.txt: %ld\n", getFileSize("input.txt"));
  // Note that getting absolute path to root is OS dependent and may not be
  // simply '/'
  printf("Size of /input.txt: %ld\n", getFileSize("/input.txt"));
}