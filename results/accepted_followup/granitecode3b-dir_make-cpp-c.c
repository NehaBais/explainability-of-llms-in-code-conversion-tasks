#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: %s <path>\n", argv[0]);
    return EXIT_FAILURE;
  }
  mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  return EXIT_SUCCESS;
}