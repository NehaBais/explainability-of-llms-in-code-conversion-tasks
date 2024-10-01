#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  struct stat sb;

  if (stat("file.txt", &sb) == 0) {
    printf("%ld B\n", sb.st_size);
  } else {
    fprintf(stderr, "Unable to get size of file.txt\n");
  }

  if (stat("/file.txt", &sb) == 0) {
    printf("%ld B\n", sb.st_size);
  } else {
    fprintf(stderr, "Unable to get size of /file.txt\n");
  }

  return 0;
}