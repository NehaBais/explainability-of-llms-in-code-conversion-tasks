#include <stdio.h>
#include <stdlib.h>

int main() {
  char *file1 = "input.txt";
  char *file2 = "/input.txt";

  struct stat file_stat1;
  if (stat(file1, &file_stat1) == 0) {
    printf("Size of %s: %ld bytes\n", file1, file_stat1.st_size);
  } else {
    perror("Error getting size of input.txt");
  }

  struct stat file_stat2;
  if (stat(file2, &file_stat2) == 0) {
    printf("Size of %s: %ld bytes\n", file2, file_stat2.st_size);
  } else {
    perror("Error getting size of /input.txt");
  }

  return 0;
}