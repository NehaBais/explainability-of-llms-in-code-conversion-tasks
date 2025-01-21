#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  char *file_name = (argc > 1) ? argv[1] : "input.txt";
  struct stat buffer;

  if (stat(file_name, &buffer) == -1) {
    perror("Error");
    return 2;
  }

  printf("Size of file.txt is %lld bytes\n", (long long int)buffer.st_size);

  return 0;
}