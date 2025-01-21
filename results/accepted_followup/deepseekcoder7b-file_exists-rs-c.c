#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void check_file(char *path) {
  struct stat path_stat;
  if (lstat(path, &path_stat) == 0) {
    if (S_ISDIR(path_stat.st<｜begin▁of▁sentence｜> _mode)) {
      printf("%s is a directory\n", path);
    } else if (S_ISREG(path_stat.st_mode)) {
      printf("%s is a regular file\n", path);
    } else {
      printf("%s exists but is not a regular file or directory.\n", path);
    }
  } else {
    printf("Path %s does not exist\n", path);
  }
}

int main() {
  char cwd[256];
  if (getcwd(cwd, sizeof(cwd)) != NULL) {
    // Current working directory.
    check_file("input.txt");
    check_file("docs");

    // Files and directories at root level.
    check_file("/input.txt");
    check_file("/docs");
  } else {
    perror("getcwd() error");
    return 1;
  }
}