#include <stdio.h>
#include <stdlib.h>

void exit_err(const char *msg, int code) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(code);
}

long getFileSize(const char *fileName) {
  FILE *pFile = fopen(fileName, "r");
  if (pFile == NULL) {
    perror("Error ");
    return -1;
  }

  fseek(pFile, 0, SEEK_END);
  long lSize = ftell(pFile);
  fclose(pFile);

  return lSize;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    exit_err("No file name supplied", 1);
  }

  long size = getFileSize(argv[1]);
  if (size == -1) {
    exit_err("Cannot open or read the file", 3);
  } else {
    printf("Size of %s is %li bytes\n", argv[1], size);
  }

  return 0;
}