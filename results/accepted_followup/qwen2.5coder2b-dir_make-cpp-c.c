#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mkdir <path>\n");
    return -1;
  }

  struct stat st;
  const char *pathToCreate = argv[1];

  // Check if the path already exists
  if (stat(pathToCreate, &st) == 0) {
    return 0;
  }

  // If it doesn't exist, create it recursively
  if (mkdir(pathToCreate, S_IRWXU | S_IXGRP | S_IUSER) == -1) {
    perror("couldn't create directory");
    return -1;
  }

  return 0;
}