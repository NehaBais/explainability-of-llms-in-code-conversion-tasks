#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mkdir <path>\n");
    return -1;
  }

  // Use the mkdir function with the flag to create missing directories
  if (mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0) {
    perror("couldn't create directory");
    return -1;
  }

  return 0;
}