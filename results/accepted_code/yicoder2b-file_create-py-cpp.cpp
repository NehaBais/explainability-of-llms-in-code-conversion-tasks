#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void create(const char *directory) {
  char buffer[1024];
  sprintf(buffer, "%s/%s", directory, "output.txt");
  int fd = open(buffer, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  if (fd >= 0) {
    close(fd);
  } else {
    perror("open"); // handle error here if you want
  }

  sprintf(buffer, "%s/%s", directory, "docs");
  if (mkdir(buffer, S_IRUSR | S_IWUSR) == 0) {
    /* Handle success */
  } else {
    perror("mkdir"); // handle error here if you want
  }
}

int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}