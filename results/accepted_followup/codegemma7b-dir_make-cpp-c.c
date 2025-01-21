#include <errno.h>
#include <stdio.h> // Include the header file for printf()
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdir_p(const char *path) {
  size_t path_len = strlen(path);
  int dir_fd;

  for (size_t i = 0; i <= path_len; i++) {
    if (i == path_len || path[i] == '/') {
      if (mkdir(path, 0755) == -1) {
        if (errno != EEXIST) {
          return -1;
        }
      }
      path += i + 1;
    }
  }

  return 0;
}

int main() {
  int result = mkdir_p("./path/to/dir");

  if (result == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory.\n");
  }

  return 0;
}