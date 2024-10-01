#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
  const char *filename = "output.txt";
  const char *dirname = "docs";

  if (creat(filename, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
    perror("File creation failed");
    return -1;
  }

  if (creat("/" filename, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
    perror("File creation failed");
    return -1;
  }

  if (mkdir(dirname, S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
    perror("Directory creation failed");
    return -2;
  }

  if (mkdir("/", dirname) != 0) {
    perror("Directory creation failed");
    return -3;
  }

  return 0;
}