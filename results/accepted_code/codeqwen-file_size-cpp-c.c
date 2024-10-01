#include <stdio.h>
#include <sys/stat.h>

void print_file_size(const char *filename) {
  struct stat st; // variable for storing information about the file
  if (stat(filename, &st) == 0) { // get information from the file
    printf("Size of file %s is %ld bytes.\n", filename, st.st_size);
  } else {
    perror("Error getting file size");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}