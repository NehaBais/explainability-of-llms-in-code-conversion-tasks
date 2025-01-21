#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void printFileSize(char *fileName) {
  struct stat statBuffer;

  if (0 != stat(fileName, &statBuffer))) {
        fprintf(stderr, "Error occurred while accessing the file: %s\n", strerror(errno)));
        exit(-1);
    }
  else {
        printf("File size is %lld bytes.\n", (long long)statBuffer.st_size));
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");

  return 0;
}