#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  // Create an empty file at the current working directory
  if (access("output.txt", F_OK) == -1) {
    if (creat("output.txt", 0644) == -1) {
      perror("Error creating file");
      return 1;
    }
  }

  // Create an empty file at the root of the filesystem
  if (access("/output.txt", F_OK) == -1) {
    if (creat("/output.txt", 0644) == -1) {
      perror("Error creating file");
      return 1;
    }
  }

  // Create an empty directory at the current working directory
  if (mkdir("docs", 0755) == -1) {
    perror("Error creating directory");
    return 1;
  }

  // Create an empty directory at the root of the filesystem
  if (mkdir("/docs", 0755) == -1) {
    perror("Error creating directory");
    return 1;
  }

  return 0;
}