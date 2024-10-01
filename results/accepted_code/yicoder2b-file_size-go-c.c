#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat buffer;
  if (stat("input.txt", &buffer) == 0) {
    printf("Size of input.txt: %lld bytes\n", (long long int)buffer.st_size);
  } else {
    perror("Error in accessing file");
  }

  if (stat("/input.txt", &buffer) == 0) {
    printf("Size of /input.txt: %lld bytes\n", (long long int)buffer.st_size);
  } else {
    perror("Error in accessing file");
  }

  return 0;
}