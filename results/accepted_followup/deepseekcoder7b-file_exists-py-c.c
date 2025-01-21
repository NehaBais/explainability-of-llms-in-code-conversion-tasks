#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int check_file(const char *path) {
  struct stat path_stat;
  if (stat(path, &path_stat) == 0) {
    return S_ISREG(
        path_stat.st_mode); // returns 1 for regular files and 0 otherwise
  } else {
    printf("Error occurred while accessing %s\n", path);
    perror("");
    return -1;
  }
}

int check_directory(const char *path) {
  struct stat path_stat;
  if (stat(path, &path_stat) == 0) {
    return S_ISDIR(
        path_stat.st_mode); // returns 1 for directories and 0 otherwise
  } else {
    printf("Error occurred while accessing %s\n", path);
    perror("");
    return -1;
  }
}

int main() {
  const char *file = "input.txt";
  if (check_file(file) == 0) {
    printf("%s does not exist.\n", file);
  } else {
    printf("%s exists.\n", file);
  }

  const char *dir = "docs";
  if (check_directory(dir) == 0) {
    printf("%s does not exist.\n", dir);
  } else {
    printf("%s exists.\n", dir);
  }

  return 0;
}