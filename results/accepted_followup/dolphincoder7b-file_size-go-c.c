#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void print_file_size(const char *file) {
  struct stat st;
  if (stat(file, &st) == -1) {
    perror("stat");
  } else {
    printf("%lld\n", st.st_size);
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}