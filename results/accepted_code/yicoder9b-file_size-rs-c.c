#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  struct stat st;
  char *file_names[] = {"input.txt", "/input.txt"}; // adjust paths as needed
  int i;

  for (i = 0; i < sizeof(file_names) / sizeof(char *); ++i) {
    if (stat(file_names[i], &st) == 0) {
      printf("Size of %s is: %ld bytes\n", file_names[i], st.st_size);
    } else {
      fprintf(stderr, "Error getting stats for %s\n", file_names[i]);
      return 2;
    }
  }
  return 0;
}