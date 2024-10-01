#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int fd;

  // Create an empty file called "output.txt" in current directory
  if ((fd = open("output.txt", O_RDWR | O_CREAT, 0644)) == -1) {
    printf("Error while creating the output file\n");
    return EXIT_FAILURE;
  } else {
    close(fd);
  }

  // Create an empty directory called "docs" in current directory
  if (mkdir("docs", 0755) == -1) {
    printf("Error while creating the docs directory\n");
    return EXIT_FAILURE;
  }

  // Create an empty file called "output.txt" in root directory
  if ((fd = open("/output.txt", O_RDWR | O_CREAT, 0644)) == -1) {
    printf("Error while creating the output file in root\n");
    return EXIT_FAILURE;
  } else {
    close(fd);
  }

  // Create an empty directory called "docs" in filesystem root
  if (mkdir("/docs", 0755) == -1) {
    printf("Error while creating the docs directory in root\n");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}