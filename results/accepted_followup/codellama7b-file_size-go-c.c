#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  struct stat *stat;
  char *f = "input.txt";
  int status;

  // Check the size of file in current working directory
  if ((status = stat->f, &stat)) != 0) {
      perror("stat");
      exit(1);
    }
  printf("%ld\n", (long)stat.st_size);

  // Check the size of file in file system root
  char *root_file = "/input.txt";
  if ((status = stat->root_file, &stat)) != 0) {
      perror("stat");
      exit(1);
    }
  printf("%ld\n", (long)stat.st_size);
  return 0;
}