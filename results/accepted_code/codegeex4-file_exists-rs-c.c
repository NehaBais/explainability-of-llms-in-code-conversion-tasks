#include <stdio.h>
#include <sys/stat.h>

int main() {
  char *paths[] = {"./input.txt", "./docs", "/input.txt", "/docs"};
  int pathCount = 4;
  struct stat buf;

  for (int i = 0; i < pathCount; i++) {
    if (stat(paths[i], &buf) != 0) {
      printf("%s does not exist\n", paths[i]);
    } else {
      if (S_ISDIR(buf.st_mode)) {
        printf("%s is a directory\n", paths[i]);
      } else {
        printf("%s is a file\n", paths[i]);
      }
    }
  }

  return 0;
}