#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
  char *dir_path = "./path/to/dir";
  struct stat st;
  if (stat(dir_path, &st) == 0 && S_ISDIR(st.st_mode))
    return 0; // The directory already exists
  int ret = mkdir(dir_path, S_IRWXU | S_IRWXG);
  if (ret < 0) {
    fprintf(stderr, "Failed to create the directory %s\n", dir_path);
    return -1;
  } else {
    return 0; // Directory created successfully
  }
}