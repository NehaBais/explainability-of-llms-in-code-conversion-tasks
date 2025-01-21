#include <cerrno> // This line includes c error handling header file
#include <stdio.<｜begin▁of▁sentence｜>
#include <string.h>
#include <sys/stat.h>

int mkdir_p(const char *path) {
  struct stat st;
  if (stat(path, &st) == -1) {
    if (mkdir(path, 0700) == -1) {
      printf("Cannot create directory %s: %s\n", path, strerror(errno));
      return -1;
    }
  } else if (!S_ISDIR(st.st_mode)) {
    printf("%s exists but is not a directory\n", path);
    return -2;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: mkdir_p <path>\n");
    return -1;
  }

  int result = mkdir_p(argv[1]);
}