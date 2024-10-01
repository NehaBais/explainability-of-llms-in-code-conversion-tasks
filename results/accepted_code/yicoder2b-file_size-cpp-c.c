#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void print_file_size(const char *filename) {
  struct stat st;
  if (stat(filename, &st) == 0 && S_ISREG(st.st_mode)) {
    printf("Size of file %s is %ld bytes.\n", filename, (long int)st.st_size);
  } else {
    perror("Failed to get file status");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
}