#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
    exit(1);
  }

  // Get the file name from the command line arguments
  char *file_name = argv[1];

  // Get the metadata of the file
  struct stat st;
  if (stat(file_name, &st) == -1) {
    perror("stat");
    exit(2);
  }

  // Print the size of the file
  printf("Size of %s is %ld bytes\n", file_name, st.st_size);

  return 0;
}