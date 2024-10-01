#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
int main() {
  // Create output.txt in current directory
  if (access("output.txt", F_OK) == -1) {
    int fd = open("output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    close(fd);
  }

  // Create docs directory in current directory
  if (access("docs/", F_OK) == -1) {
    mkdir("docs", S_IRUSR | S_IWUSR);
  }

  // Create output.txt in root directory (/)
  if (access("/output.txt", F_OK) == -1) {
    int fd = open("/output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    close(fd);
  }
  // Create docs directory in root (/)
  if (access("/docs/", F_OK) == -1) {
    mkdir("/docs", S_IRUSR | S_IWUSR);
  }
  return 0;
}