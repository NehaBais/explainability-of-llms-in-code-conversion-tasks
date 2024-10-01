#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char err[] = "File move error";

  if (rename("input.txt", "output.txt") == -1) {
    perror(err);
    exit(-1);
  }

  if (rename("docs", "mydocs") == -1) {
    perror(err);
    exit(-1);
  }

  // Since "/input.txt" and "/output.txt" are relative paths in Rust
  // they must be converted to absolute filesystem paths before using rename()
  char path[32];
  if (getcwd(path, sizeof(path)) == NULL) {
    perror(err);
    exit(-1);
  }
  strcat(path, "/input.txt");
  if (rename(path, "/output.txt") == -1) {
    perror(err);
    exit(-1);
  }

  // Same as above but for "docs" to "mydocs"
  strcat(path, "/docs");
  if (getcwd(path, sizeof(path)) == NULL) {
    perror(err);
    exit(-1);
  }
  strcat(path, "/mydocs");
  if (rename(path, "/") == -1) {
    perror(err);
    exit(-1);
  }
  return 0;
}