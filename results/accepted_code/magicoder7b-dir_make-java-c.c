#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int create_dir(const char *path) {
  if (mkfifo(path, 0755) == -1 && errno != EEXIST) {
    perror("Failed to create fifo");
    return 1;
  }
  printf("Directory %s successfully created\n", path);
  return 0;
}

int main(void) {
  char *dir = "C:/parent/test";
  if (create_dir(dir) != 0) {
    exit(1);
  }

  return 0;
}