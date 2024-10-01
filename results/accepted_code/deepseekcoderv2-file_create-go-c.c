#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void createFile(const char *fn) {
  int fd = open(fn, O_CREAT | O_WRONLY | O_TRUNC, 0644);
  if (fd == -1) {
    perror("open");
    return;
  }
  printf("file %s created!\n", fn);
  close(fd);
}

void createDir(const char *dn) {
  int status = mkdir(dn, 0755);
  if (status == -1) {
    perror("mkdir");
    return;
  }
  printf("directory %s created!\n", dn);
}

int main() {
  char *fn = "input.txt";
  createFile(fn);

  // Here, fn is a pointer to the string literal "/input.txt". The function call
  // will access memory at this address and write the contents of the string
  // literal into that memory location. This will result in file "/input.txt"
  // being created on disk when you run your program with "go run filename.go".
  createFile("/input.txt");

  // Here, dn is a pointer to the string literal "docs". The function call will
  // access memory at this address and write the contents of the string literal
  // into that memory location. This will result in directory docs being created
  // on disk when you run your program with "go run filename.go".
  createDir("docs");
  createDir("/docs");

  return 0;
}