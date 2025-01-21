#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int make_dir(const char *path, mode_t mode) {
  if (mkdir(path, mode) == 0) {
    return 1; // Directory was created successfully
  } else {
    return -1; // Directory already exists or could not be created
  }
}

int main() {
  const char *dir_path = "/tmp/some/path/to/dir";
  if (make_dir(dir_path, S_IRWXU | S_IXGRP | S_IXOTH) == 1) {
    printf("Directory '%s' was created successfully.\n", dir_path);
  } else {
    perror("Failed to create directory");
  }
  return 0;
}