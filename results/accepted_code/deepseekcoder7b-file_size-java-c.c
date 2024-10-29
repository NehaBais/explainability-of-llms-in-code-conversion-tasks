#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat st;

  // for the file in the current working directory
  if (stat("input.txt", &st) == 0) {
    printf("%ld B\n", st.st_size);
  } else {
    printf("File does not exist.\n");
  }

  // for the file in the root of the filesystem
  if (stat("/file.txt", &st) == 0) {
    printf("%ld B\n", st.st_size);
  } else {
    printf("File does not exist.\n");
  }

  return 0;
}