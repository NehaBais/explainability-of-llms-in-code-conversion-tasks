#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void print_file_size(const char *filename) {
  struct stat st;
  if (stat(filename, &st) == 0) {
    printf("Size of file %s is %ld bytes.\n", filename, st.st_size);
  } else {
    perror("Error:");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}