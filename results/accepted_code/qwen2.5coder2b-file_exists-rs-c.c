#include <stdio.h>
#include <stdlib.h>

int main() {
  char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
  int i;

  for (i = 0; i < sizeof(files) / sizeof(files[0]); ++i) {
    if (access(files[i], F_OK) == 0) {
      struct stat st;
      if (stat(files[i], &st) == 0) {
        if (S_ISDIR(st.st_mode)) {
          printf("%s is a directory\n", files[i]);
        } else {
          printf("%s is a file\n", files[i]);
        }
      } else {
        fprintf(stderr, "Error getting file status for %s: %s\n", files[i],
                strerror(errno));
      }
    } else {
      fprintf(stderr, "File or directory %s does not exist\n", files[i]);
    }
  }

  return 0;
}