#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void check_file_or_dir(const char *path) {
  struct stat sb;
  if (stat(path, &sb) == 0) {
    if (S_ISDIR(sb.st_mode)) {
      printf("%s is a directory\n", path);
    } else {
      printf("%s is a file\n", path);
    }
  } else {
    printf("%s does not exist\n", path);
  }
}

int main() {
  const char *paths[] = {"input.txt", "docs", "/input.txt", "/docs"};
  for (int i = 0; i < 4; ++i) {
    check_file_or_dir(paths[i]);
  }
  return 0;
}