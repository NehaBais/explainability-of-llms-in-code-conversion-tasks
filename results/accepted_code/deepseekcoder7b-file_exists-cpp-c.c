#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void file_exists(const char *path) {
  struct stat path_stat;
  int result = stat(path, &path_stat);

  if (result == 0) {
    switch (path_stat.st_mode & S_IFMT) {
    case S_IFDIR:
      printf("%s is a directory\n", path);
      break;
    case S_IFREG:
      printf("%s exists with a file size of %ld bytes.\n", path,
             path_stat.st_size);
      break;
    default:
      printf("%s exists but is not a regular file or directory\n", path);
      break;
    }
  } else {
    printf("%s does not exist\n", path);
  }
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("/docs/input.txt"); // Assuming docs is at the root of file system
  file_exists("/docs/zero_length.txt"); // Same as above
}