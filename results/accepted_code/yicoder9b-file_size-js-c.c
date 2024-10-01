#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  struct stat buf;

  if (stat("input.txt", &buf) == 0) {
    printf("Size of input.txt: %ld\n", buf.st_size);
  } else {
    printf("Failed to get size of input.txt\n");
  }

  if (stat("/input.txt", &buf) ==
      0) { // Assuming '/' as file system root, this might not be the case for
           // all systems. Adjust according to your system.
    printf("Size of /input.txt: %ld\n", buf.st_size);
  } else {
    printf("Failed to get size of /input.txt\n");
  }
  return 0;
}