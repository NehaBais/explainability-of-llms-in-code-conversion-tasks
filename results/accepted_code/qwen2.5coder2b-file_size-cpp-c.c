#include <stdio.h>
#include <stdlib.h>
#include <sys/statvfs.h>

void print_file_size(const char *filename) {
  struct statvfs info;
  if (statvfs(filename, &info) == 0) {
    printf("Size of file %s is %ld bytes.\n", filename,
           info.f_blocks * info.f_bsize);
  } else {
    perror("Failed to get file size");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}