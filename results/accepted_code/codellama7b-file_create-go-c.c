#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  // Create an empty file in the current working directory
  char *filename = "output.txt";
  int fd = creat(filename, 0644);
  if (fd == -1) {
    perror("Error creating file");
    return 1;
  }
  printf("File %s created!\n", filename);
  close(fd);

  // Create an empty directory in the current working directory
  char *dirname = "docs";
  int dir_fd = mkdir(dirname, 0755);
  if (dir_fd == -1) {
    perror("Error creating directory");
    return 1;
  }
  printf("Directory %s created!\n", dirname);

  // Create an empty file in the root directory
  filename = "/output.txt";
  fd = creat(filename, 0644);
  if (fd == -1) {
    perror("Error creating file");
    return 1;
  }
  printf("File %s created!\n", filename);
  close(fd);

  // Create an empty directory in the root directory
  dirname = "/docs";
  dir_fd = mkdir(dirname, 0755);
  if (dir_fd == -1) {
    perror("Error creating directory");
    return 1;
  }
  printf("Directory %s created!\n", dirname);

  return 0;
}