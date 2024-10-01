#include <stdio.h>
#include <stdlib.h>

void exit_err(const char *msg, int code) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(code);
}

int main(int argc, char **argv) {
  if (argc == 1) {
    exit_err("No file name supplied", 1);
  }

  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    perror("Error opening file");
    return (2);
  }

  fseek(file, 0L, SEEK_END);
  long size = ftell(file);

  printf("Size of %s is %ld bytes\n", argv[1], size);

  fclose(file);
}