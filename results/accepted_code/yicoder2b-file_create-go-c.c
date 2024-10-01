#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void createFile(const char *filename) {
  int fd;
  mode_t mode = S_IRUSR | S_IWUSR;
  fd = open(filename, O_CREAT | O_WRONLY, mode);
  if (fd == -1) {
    printf("Cannot create file: %s\n", strerror(errno));
    return;
  }
  close(fd);
  printf("File %s created!\n", filename);
}

void createDir(const char *dirname) {
  if (mkdir(dirname, S_IRUSR | S_IWUSR) == -1) {
    printf("Cannot create directory: %s\n", strerror(errno));
  } else {
    printf("Directory %s created!\n", dirname);
  }
}

int main() {
  createFile("input.txt");
  createFile("/input.txt"); // will fail as "/input.txt" is absolute path and
                            // cannot be open in read mode by our user
  createDir("docs");
  createDir("/docs"); // will fail as "/docs" is absolute path and it's not
                      // accessible to the program we are running
  return 0;
}