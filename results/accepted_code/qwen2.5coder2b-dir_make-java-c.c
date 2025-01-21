#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  const char *dir = "C:/parent/test";

  if (mkdir(dir, S_IRWXU | S_IROTH | S_IXOTH) == 0) {
    printf("path successfully created\n");
  } else {
    perror("Error creating directory");
  }

  return 0;
}