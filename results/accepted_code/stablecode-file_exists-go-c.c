#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

void print_stat(const char *path) {
  struct stat file_stat;
  if (stat(path, &file_stat)) {
        fprintf(stderr, "Failed to get the status of %s: %s\n", path, strerror(errno)));
        return;
  }

  switch (file_stat.st_mode) {
  case S_IFDIR:
    printf("%s is a directory.\n", path);
    break;
  case S_IFREG:
    printf("%s is a file.\n", path);
    break;
  default:
    fprintf(stderr, "Unknown mode for %s\n", path);
  }
}

int main() {
  print_stat("input.txt");
  print_stat("/input.txt");
  print_stat("docs");
  print_stat("/docs");
  return 0;
}