#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char *path = "C:/parent/test";

  char buffer[1024];
  strcpy(buffer, path);

  if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IXGRP | S_IXOTH)) {
    perror("Error creating directory\n"); // print error if fails to create
                                          // directory
    return 1;                             // return 1 for failure
  }

  printf("Directory %s created successfully\n", buffer);

  return 0; // successful execution
}