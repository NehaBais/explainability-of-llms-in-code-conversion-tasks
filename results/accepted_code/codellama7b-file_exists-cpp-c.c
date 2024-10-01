#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/* Function to check if a file exists and is readable */
int check_file(const char *path) {
  struct stat buf;
  int result = 0;
  /* Check if the file path is null */
  if (path == NULL) {
    return -1;
  }
  /* Check if the file exists and is readable */
  result = lstat(path, &buf);
  if (result < 0) {
    perror("lstat() error");
  } else {
    if ((buf.st_mode & S_IFMT) == S_IFREG && access(path, R_OK)) {
      return 1;
    } else {
      return 0;
    }
  }
}

int main() {
  int result;
  /* check if the file exists and is readable in current working directory */
  result = check_file("input.txt");
  if (result == 1) {
    printf("Input.txt exists and is readable\n");
  } else {
    printf("Input.txt does not exist or is not readable\n");
  }

  /* check if the file exists and is readable in filesystem root */
  result = check_file("/docs/input.txt");
  if (result == 1) {
    printf("/docs/input.txt exists and is readable\n");
  } else {
    printf("/docs/input.txt does not exist or is not readable\n");
  }
}