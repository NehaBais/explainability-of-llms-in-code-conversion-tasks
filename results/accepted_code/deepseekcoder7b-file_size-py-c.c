#include <stdio.h>
#include <sys/stat.h>

off_t get_file_size(char *filename) {
  struct stat st;
  if (stat(filename, &st) == 0)
    return st.st_size;

  return -1; // Returning -1 to indicate error
}

int main() {
  off_t file_size = get_file_size("./input.txt");

  if (file_size != -1)
    printf("%lld\n", file_size);
  else
    perror("stat"); // This will print an error message in case of failure

  return 0;
}