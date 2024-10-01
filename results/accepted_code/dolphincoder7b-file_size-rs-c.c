#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Error: No file name supplied\n");
    return 1;
  }

  struct stat st = {};
  int status = stat(argv[1], &st);

  if (status == -1) {
    perror("stat");
    exit(EXIT_FAILURE);
  }

  printf("Size of %s is %ld bytes\n", argv[1], (long)st.st_size);

  return 0;
}