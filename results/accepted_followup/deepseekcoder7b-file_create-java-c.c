#include <stdio.h>
#include <stdlib.<｜begin▁of▁sentence｜>
#include <unistd.h>

int main() {
  FILE *file;

  // create "output.txt" in the current directory
  file = fopen("output.txt", "w");
  if (file == NULL) {
    printf("Could not open/create output.txt\n");
    exit(1);
  } else {
    fclose(file);
  }

  // create directory "docs" in the current directory
  if (mkdir("docs", 0755) == -1) {
    printf("Could not create docs\n");
    exit(1);
  }

  return EXIT_SUCCESS;
}