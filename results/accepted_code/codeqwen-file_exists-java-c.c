#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat buffer;
  int exist_in_current = (stat("docs/input.txt", &buffer) == 0);
  int exist_in_root = (stat("/docs/input.txt", &buffer) == 0);

  printf("File exists in current working directory: %d\n", exist_in_current);
  printf("File exists in root directory: %d\n", exist_in_root);

  return 0;
}