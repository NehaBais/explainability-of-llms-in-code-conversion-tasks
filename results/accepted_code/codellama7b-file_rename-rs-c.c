#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void) {
  char *input_file = "input.txt";
  char *output_file = "output.txt";
  char *docs_dir = "docs";
  char *mydocs_dir = "mydocs";

  // Rename input.txt to output.txt here
  if (rename(input_file, output_file) != 0) {
    perror("File move error");
    exit(1);
  }

  // Rename docs directory to mydocs here
  if (rename(docs_dir, mydocs_dir) != 0) {
    perror("File move error");
    exit(1);
  }

  // Change the working directory to the root filesystem
  if (chroot("/") != 0) {
    perror("Chroot error");
    exit(1);
  }

  // Rename input.txt to output.txt in the root filesystem
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("File move error");
    exit(1);
  }

  // Rename docs directory to mydocs in the root filesystem
  if (rename("/docs", "/mydocs") != 0) {
    perror("File move error");
    exit(1);
  }

  return 0;
}