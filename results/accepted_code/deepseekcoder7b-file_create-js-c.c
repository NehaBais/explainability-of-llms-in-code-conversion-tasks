#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
// For Windows, use #include "windows.h" and call CreateDirectory(), WriteFile()
// etc instead of open(), creat(), mkdir()

int main() {
  int fd;

  // creating an empty file called "output.txt" in the current directory ('.')
  if ((fd = creat("./output.txt", O_WRONLY | O_CREAT)) == -1) {
    perror("Error: ");
    return 1;
  }
  close(fd);

  // creating an empty file called "output.txt" in the root directory ('/')
  if ((fd = creat("/output.txt", O_WRONLY | O_CREAT)) == -1) {
    perror("Error: ");
    return 1;
  }
  close(fd);

  // creating a new directory called "docs" in the current directory ('.')
  if ((mkdir("./docs", S_IRWXU)) == -1) {
    perror("Error: ");
    return 1;
  }

  // creating a new directory called "docs" in the root directory ('/')
  if ((mkdir("/docs", S_IRWXU)) == -1) {
    perror("Error: ");
    return 1;
  }

  return 0;
}