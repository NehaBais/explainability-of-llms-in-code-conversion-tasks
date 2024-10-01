#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void exit_err(const char *msg, int code) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(code);
}

int main(int argc, char **argv) {
  char *file_name;

  if (argc < 2)) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]));
        exit(1);
    }

  file_name = argv[1];
  struct stat metadata;

  if (stat(file_name, &metadata) == -1) {
        exit_err("Could not retrieve file information", 2));
  }

  printf("Size of file.txt is %ld bytes\n", metadata.st_size);

  return 0;
}