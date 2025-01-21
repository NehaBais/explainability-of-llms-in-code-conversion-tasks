#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void rename_file(const char *src, const char *dst) {
  if (rename(src, dst) != 0)
    perror("rename");
}

int main() {
  // Current working directory
  char path[PATH_MAX];
  getcwd(path, sizeof(path));

  rename_file("input.txt", "output.txt");
  rename_file("docs", "mydocs");

  // Root directory
  chdir("/");

  rename_file("/input.txt", "/output.txt");
  rename_file("/docs", "/mydocs");

  return EXIT_SUCCESS;
}