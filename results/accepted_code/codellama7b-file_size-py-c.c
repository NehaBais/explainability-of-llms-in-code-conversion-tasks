#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat st;
  long size1, size2;

  // Get the size of file input.txt in the current working directory
  if (stat("input.txt", &st) == 0) {
    size1 = st.st_size;
  } else {
    printf("Error: %s\n", strerror(errno));
  }

  // Get the size of file /input.txt in the file system root
  if (stat("/input.txt", &st) == 0) {
    size2 = st.st_size;
  } else {
    printf("Error: %s\n", strerror(errno));
  }

  return 0;
}