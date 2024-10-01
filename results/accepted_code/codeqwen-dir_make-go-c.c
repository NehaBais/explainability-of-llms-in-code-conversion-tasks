#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int create_directory(char *path, mode_t mode) {
  if (mkdir(path, mode) == -1) {
    if (errno != EEXIST) {
      perror("Error creating directory");
      return 1;
    }
  }
  return 0;
}

int main() {
  char *path = "./path/to/dir";
  mode_t mode = S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP;

  if (create_directory(path, mode)) {
    return 1; // Error creating directory
  } else {
    printf("Directory created successfully.\n");
    return 0;
  }
}