#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  struct stat buffer;
  const char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
  size_t n = sizeof files / sizeof files[0];

  for (size_t i = 0; i < n; ++i) {
    if (stat(files[i], &buffer) != 0) {
      printf("%s does not exist\n", files[i]);
    } else if (S_ISDIR(buffer.st_mode)) {
      printf("%s is a directory\n", files[i]);
    } else if (S_ISREG(buffer.st_mode)) {
      printf("%s is a file\n", files[i]);
    }
  }
  return 0;
}