#include <errno.h>
#include <libgen.h> // For dirname and basename
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void exit_err(const char *msg, int code) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(code);
}

int main(int argc, char **argv) {
  if (argc < 2) {
    exit_err("No file name supplied", 1);
  }

  char *file_name = argv[1];
  struct stat st;

  if (stat(file_name, &st) == -1) {
    exit_err(strerror(errno), 2);
  }

  printf("Size of %s is %zu bytes\n", file_name, st.st_size);
  return 0;
}